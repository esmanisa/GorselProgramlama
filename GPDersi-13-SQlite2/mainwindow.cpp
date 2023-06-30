#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setEnabled(false);
    sqlitedb.setDatabaseName("C:/Users/user/Desktop/BELGE/Ders/2-2/GÖRSEL PROGRAMLAMA/Projects/DB.Browser.for.SQLite-3.12.2-win64/DB Browser for SQLite/kutuphane.db");
    if(!sqlitedb.open()) {
        ui->statusbar->showMessage("Durum: Veritabanı bağlantısı başarısız!");
    }
    else {
        ui->statusbar->showMessage("Durum: Veritabanı bağlantısı başarılı!");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnOturum_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT uye_ad FROM uye WHERE uye_ad = ? and uye_sifre = ? ;");
    query.addBindValue(ui->edtUyeAd->text());
    query.addBindValue(ui->edtUyeSifre->text());
    query.exec();

    int sayac = 0;
    while(query.next())
    {
        sayac++;
    }
    if (sayac == 1)
    {
        ui->tabWidget->setEnabled(true);
        ui->statusbar->showMessage("Durum: Kullanıcı eşleşti, oturum açıldı.");
    }
    else
    {
        ui->statusbar->showMessage("Durum: Oturum açılamadı.");
        qDebug() << query.lastError();
    }
}

void MainWindow::on_btnOduncVer_clicked()
{
    if (!sqlitedb.open())
        ui->statusbar->showMessage("Durum: Bağlantı Başarısız.");

    else
    {
        QSqlQuery qry;
        qry.prepare("insert into odunc (kitap_id, uye_id, sure) values(?, ?, ?); ");
        qry.addBindValue(ui->edtOdncKitap->text());
        qry.addBindValue(ui->edtOdncUyeId->text());
        qry.addBindValue(ui->edtOdncSure->text());

        if(qry.exec())
            ui->statusbar->showMessage("Durum: Odunc Verme Islemi Basarili!");
        else
        {
            ui->statusbar->showMessage("Durum: Odunc Verme Islemi Basarisiz!");
            qDebug() << qry.lastError();
        }
    }
}
