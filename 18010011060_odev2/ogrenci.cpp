#include "ogrenci.h"
#include "ui_ogrenci.h"

Ogrenci::Ogrenci(QSqlDatabase db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ogrenci)
{
    ui->setupUi(this);
    sorguOgrenci = new QSqlQuery(db);
    ogrencileriGoster();
}

Ogrenci::~Ogrenci()
{
    delete ui;
}

void Ogrenci::ogrencileriGoster()
{
    modelOgrenci = new QSqlQueryModel();

    if(sorguOgrenci->exec("select * from öğrenci"))
    {
        modelOgrenci->setQuery(*sorguOgrenci);
        ui->tbvwOgrenciler->setModel(modelOgrenci);
    }
    else
    {
        qDebug() <<sorguOgrenci->lastError();
    }
}

void Ogrenci::on_tbvwOgrenciler_clicked(const QModelIndex &index)
{
    ui->lnOgrenciNo->setText(modelOgrenci->index(index.row(), 0).data().toString());
    ui->lnOgrenciAd->setText(modelOgrenci->index(index.row(), 1).data().toString());
    ui->lnOgrenciSoyad->setText(modelOgrenci->index(index.row(), 2).data().toString());
}


void Ogrenci::on_btnOgrenciYeniKayit_clicked()
{
    sorguOgrenci->prepare("insert into öğrenci(ogr_ad, ogr_soyad) values(?, ?);");
    sorguOgrenci->addBindValue(ui->lnOgrenciAd->text());
    sorguOgrenci->addBindValue(ui->lnOgrenciSoyad->text());
    if(ui->lnOgrenciAd->text() == "" || ui->lnOgrenciSoyad->text() == "")
    {
        QMessageBox::critical(this, "Hata!", "Lütfen gerekli alanları doldurun!");
    }

    if(!sorguOgrenci->exec())
    {
        QMessageBox::critical(this, "Hata!", sorguOgrenci->lastError().text());
    }
    ogrencileriGoster();
}

void Ogrenci::on_btnOgrenciSil_clicked()
{
    int ogr_no = ui->lnOgrenciNo->text().toInt();
    sorguOgrenci->prepare("delete from öğrenci where ogr_no = ?;");
    sorguOgrenci->addBindValue(ogr_no);

    if(sorguOgrenci->exec("select * from notlar where ogr_no = "+QString::number(ogr_no)+";"))
    {
        QMessageBox::information(this, "Hata!", "Bu öğrenci silinemez. Öğrenciye ait tanımlanmış dersler var!");
    }

    if(!sorguOgrenci->exec())
    {
        QMessageBox::critical(this, "Hata!", sorguOgrenci->lastError().text());
    }
    ogrencileriGoster();
}

void Ogrenci::on_btnOgrenciGuncelle_clicked()
{
    sorguOgrenci->prepare("update öğrenci set ogr_ad=?, ogr_soyad=? where ogr_no=?;");
    sorguOgrenci->addBindValue(ui->lnOgrenciAd->text());
    sorguOgrenci->addBindValue(ui->lnOgrenciSoyad->text());
    sorguOgrenci->addBindValue(ui->lnOgrenciNo->text().toInt());

    if(!sorguOgrenci->exec())
    {
        QMessageBox::critical(this, "Hata!", sorguOgrenci->lastError().text());
    }
    ogrencileriGoster();
}
