#include "personel.h"
#include "ui_personel.h"

personel::personel(QSqlDatabase db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personel)
{
    ui->setupUi(this);
    sorgu = new QSqlQuery(db);
    listele();
}

personel::~personel()
{
    delete ui;
}

void personel::listele()
{
    model = new QSqlQueryModel();
    if(sorgu->exec("select * from personel"))
    {
        model->setQuery(*sorgu);
        ui->tblePersonel->setModel(model);
    }
    else
    {
        qDebug() << sorgu->lastError();
    }
}

void personel::on_btnKaydet_clicked()
{
    sorgu->prepare("insert into personel(personel_ad, personel_soyad, departman_id) values(?, ?, ?); ");
    sorgu->addBindValue(ui->edtPersonelAd->text());
    sorgu->addBindValue(ui->edtPersonelSoyad->text());
    sorgu->addBindValue(ui->edtDepartmanId->text());
    if(!sorgu->exec())
    {
        QMessageBox::critical(this, "Hata!", sorgu->lastError().text());
    }
    listele();
}

void personel::on_tblePersonel_clicked(const QModelIndex &index)
{
    ui->edtPersonelId->setText(model->index(index.row(), 0).data().toString());
    ui->edtPersonelAd->setText(model->index(index.row(), 1).data().toString());
    ui->edtPersonelSoyad->setText(model->index(index.row(), 2).data().toString());
    ui->edtDepartmanId->setText(model->index(index.row(), 3).data().toString());
}

void personel::on_btnGuncelle_clicked()
{
    sorgu->prepare("update personel set personel_ad=?, personel_soyad=?, departman_id=? where personel_id= ?;");
    sorgu->addBindValue(ui->edtPersonelAd->text());
    sorgu->addBindValue(ui->edtPersonelSoyad->text());
    sorgu->addBindValue(ui->edtDepartmanId->text().toInt());
    sorgu->addBindValue(ui->edtPersonelId->text().toInt());

    if(!sorgu->exec())
    {
        QMessageBox::critical(this, "Hata!", sorgu->lastError().text());
    }
    listele();
}

void personel::on_btnSil_clicked()
{
    sorgu->prepare("delete from personel where personel_id = ?;");
    sorgu->addBindValue(ui->edtPersonelId->text().toInt());

    if(!sorgu->exec())
    {
        QMessageBox::critical(this, "Hata!", sorgu->lastError().text());
    }
    listele();
}
