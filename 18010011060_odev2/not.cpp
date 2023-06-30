#include "not.h"
#include "ui_not.h"

Not::Not(QSqlDatabase db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Not)
{
    ui->setupUi(this);
    sorguNot = new QSqlQuery(db);
}

Not::~Not()
{
    delete ui;
}

void Not::notlariGoster()
{
    modelNot = new QSqlQueryModel();

    if(sorguNot->exec("select * from notlar"))
    {
        modelNot->setQuery(*sorguNot);
        ui->tbvwTumDersOgr->setModel(modelNot);
    }
    else
    {
        qDebug() << sorguNot->lastError();
    }
}


void Not::on_tbvwNotTumOgr_clicked(const QModelIndex &index)
{
    ui->lnNotOgrNo->setText(modelNot->index(index.row(), 0).data().toString());

    QString indis = modelNot->index(index.row(), 0).data().toString();
    int ogr_no = indis.toInt();
    QSqlQuery sorgu;
    sorgu.prepare("select * from öğrenci where ogr_no = ?;");
    sorgu.addBindValue(ogr_no);
    sorgu.exec();

    modelNot = new QSqlQueryModel();
    modelNot->setQuery(sorgu);
    ui->tbvwNotTumOgr->setModel(modelNot);
}

void Not::on_tbvwNotTumDers_clicked(const QModelIndex &index)
{
    ui->lnNotOgrNo->setText(modelNot->index(index.row(), 0).data().toString());

    QString indis = modelNot->index(index.row(), 0).data().toString();
    int ders_kodu = indis.toInt();
    QSqlQuery sorgu;
    sorgu.prepare("select * from dersler where ders_kodu = ?;");
    sorgu.addBindValue(ders_kodu);
    sorgu.exec();

    modelNot = new QSqlQueryModel();
    modelNot->setQuery(sorgu);
    ui->tbvwNotTumDers->setModel(modelNot);
}

void Not::on_btnDersKayitEkle_clicked()
{
    int vize=ui->lnNotVizeNot->text().toInt();
    int final = ui->lnNotFinalNot->text().toInt();
    int gecme_not = (vize*0.4) + (final*0.6);
    sorguNot->prepare("insert into notlar(ogr_no, ders_kodu, vize_not, final_not, gecme_notu) values(?, ?, ?, ?);");
    sorguNot->addBindValue(ui->lnNotOgrNo->text().toInt());
    sorguNot->addBindValue(ui->lnNotDersKod->text().toInt());
    sorguNot->addBindValue(vize);
    sorguNot->addBindValue(final);
    sorguNot->addBindValue(gecme_not);

    if(ui->lnNotVizeNot->text() == "" || ui->lnNotFinalNot->text() == "")
    {
        QMessageBox::critical(this, "Hata!", "Lütfen gerekli alanları doldurun!");
    }

    if(ui->lnNotOgrNo->text() == sorguNot->exec("select ogr_no from notlar") && ui->lnNotDersKod->text() == sorguNot->exec("select ders_kod from notlar"))
    {
        QMessageBox::information(this, "Hata!", "Bu ders bu öğrenci üzerinde zaten kayıtlı!");
    }

    if(!sorguNot->exec())
    {
        QMessageBox::critical(this, "Hata!", sorguNot->lastError().text());
    }
    notlariGoster();
}
