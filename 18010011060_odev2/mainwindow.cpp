#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ogrenci.h"
#include "dersler.h"
#include "not.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->setupUi(this);
    db.setDatabaseName("C:/Users/user/Desktop/BELGE/Ders/2-2/GÖRSEL PROGRAMLAMA/Projects/DB.Browser.for.SQLite-3.12.2-win64/DB Browser for SQLite/ogrenci_otomasyon.db");
    if(!db.open())
    {
        ui->statusbar->showMessage("Veritabanına bağlanılamadı!");
    }
    else
    {
        ui->statusbar->showMessage("Veritabanına bağlanıldı!");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnOgrenciIslem_clicked()
{
    Ogrenci *ogr=new Ogrenci(db);
    ogr->show();
}

void MainWindow::on_btnDersIslem_clicked()
{
    Dersler *ders=new Dersler(db);
    ders->show();
}

void MainWindow::on_btnNotIslem_clicked()
{
    Not *notIslem = new Not(db);
    notIslem->show();
}
