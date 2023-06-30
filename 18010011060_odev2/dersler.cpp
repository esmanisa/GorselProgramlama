#include "dersler.h"
#include "ui_dersler.h"

Dersler::Dersler(QSqlDatabase db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dersler)
{
    ui->setupUi(this);
    sorguDers = new QSqlQuery(db);

    modelDers = new QSqlQueryModel();

    if(sorguDers->exec("select * from dersler"))
    {
        modelDers->setQuery(*sorguDers);
        ui->tbvwDersler->setModel(modelDers);
    }
    else
    {
        qDebug() << sorguDers->lastError();
    }
}

Dersler::~Dersler()
{
    delete ui;
}

void Dersler::dersleriGoster()
{
    modelDers = new QSqlQueryModel();
    if(sorguDers->exec("select * from dersler"))
    {
        modelDers->setQuery(*sorguDers);
        ui->tbvwDersler->setModel(modelDers);
    }
    else
    {
        qDebug() << sorguDers->lastError();
    }
}

void Dersler::on_tbvwDersler_clicked(const QModelIndex &index)
{
    ui->lnDersAd->setText(modelDers->index(index.row(), 0).data().toString());
    ui->lnDersKod->setText(modelDers->index(index.row(), 2).data().toString());

    QString indis = modelDers->index(index.row(), 0).data().toString();
    int ogr_no = indis.toInt();
    QSqlQuery sorgu;
    sorgu.prepare("select * from notlar where ogr_no = ?;");
    sorgu.addBindValue(ogr_no);
    sorgu.exec();

    modelDers = new QSqlQueryModel();
    modelDers->setQuery(sorgu);
    ui->tbvwDersOgrencileri->setModel(modelDers);
}

void Dersler::on_btnDersYenKayit_clicked()
{
    sorguDers->prepare("insert into dersler(ders_kodu, ders_adi) values (?, ?);");
    sorguDers->addBindValue(ui->lnDersKod->text());
    sorguDers->addBindValue(ui->lnDersAd->text());

    if(ui->lnDersKod->text() == "" || ui->lnDersAd->text() == "")
    {
        QMessageBox::critical(this, "Hata!", "Lütfen gerekli alanları doldurun!");
    }

    if(ui->lnDersKod->text() == sorguDers->exec("select ders_kodu from dersler"))
    {
        QMessageBox::information(this, "Hata!", "Bu kodda başka bir ders vardır. Farklı kodda ders ekleyiniz!");
    }

    if(!sorguDers->exec())
    {
        QMessageBox::critical(this, "Hata!", sorguDers->lastError().text());
    }
    dersleriGoster();
}

void Dersler::on_btnDersSil_clicked()
{
    int ders_kodu = ui->lnDersKod->text().toInt();
    sorguDers->prepare("delete from dersler where ders_kodu = ?;");
    sorguDers->addBindValue(ders_kodu);

    if(sorguDers->exec("select * from notlar where ders_kodu = "+QString::number(ders_kodu)+";"))
    {
        QMessageBox::information(this, "Hata!", "Bu ders silinemez. Derse ait tanımlanmış öğrenciler var!");
    }

    if(!sorguDers->exec())
    {
        QMessageBox::critical(this, "Hata!", sorguDers->lastError().text());
    }
    dersleriGoster();
}

void Dersler::on_btnDersGuncelle_clicked()
{
    sorguDers->prepare("update öğrenci set ders_kodu=?, ders_adi=? where ders_kodu=?;");
    sorguDers->addBindValue(ui->lnDersKod->text().toInt());
    sorguDers->addBindValue(ui->lnDersAd->text());
    sorguDers->addBindValue(ui->lnDersKod->text().toInt());

    if(!sorguDers->exec())
    {
        QMessageBox::critical(this, "Hata!", sorguDers->lastError().text());
    }
    dersleriGoster();
}
