#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnDbConnect_clicked()
{
    sqlitedb.setDatabaseName("C:/Users/user/Desktop/BELGE/Ders/2-2/GÖRSEL PROGRAMLAMA/sqlite/myDB.db");
    if(!sqlitedb.open())
    {
        QMessageBox::information(this, "Hata", "Veritabaı bağlantısı sağlanamadı");
    }
    else {
        QMessageBox::information(this, "Durum", "Veritabaı bağlantısı başarılı");
    }
}

void Dialog::on_pushButton_clicked()
{
    if(!sqlitedb.open())
    {
        QMessageBox::information(this, "Hata", "Once veritabanına bağlanınız!");
    }
    else
    {
        QSqlQuery qry;
        qry.prepare("insert into uye values (?, ?)");
        qry.addBindValue(ui->edtAd->text());
        qry.addBindValue(ui->edtSoyad->text());
        if(qry.exec())
            QMessageBox::information(this, "durum", "Eklendi");
        else
            qDebug() << qry.lastError();
    }

}

void Dialog::on_pushButton_2_clicked()
{
    QSqlQuery qry;
    model = new QSqlQueryModel;
    if (qry.exec("Select * from uye"))
    {
        model->setQuery(qry);
        ui->tableView->setModel(model);
    }
    else
        qDebug() << qry.lastError();
}
