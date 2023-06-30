#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db.setDatabaseName("C:/Users/user/Desktop/BELGE/Ders/2-2/GÖRSEL PROGRAMLAMA/Projects/DB.Browser.for.SQLite-3.12.2-win64/DB Browser for SQLite/sirket.db");
    if(!db.open())
    {
        ui->statusbar->showMessage("Veritabanına bağlanılamadı!");
    }
    else
    {
        ui->statusbar->showMessage("Veritabanına bağlanıldı.");
    }

    model=new QSqlTableModel();
    model->setTable("departman");
    ui->tableView->setModel(model);
    model->select();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    QString indis=model->index(index.row(), 0).data().toString();
    int dep_id = indis.toInt();
    QSqlQuery sorgu;
    sorgu.prepare("select * from personel where departman_id = ?; ");
    sorgu.addBindValue(dep_id);
    sorgu.exec();

    model2 = new QSqlQueryModel();
    model2->setQuery(sorgu);
    ui->tableView_2->setModel(model2);
}

void MainWindow::on_pushButton_clicked()
{
    personel *per= new personel(db);
    per->show();
}
