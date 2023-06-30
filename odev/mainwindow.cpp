#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;


}


 void MainWindow::on_btn_rastgele_clicked()
{
    int sinir = ui->spinBox->value();
    int sayi = QRandomGenerator::global()->bounded(0,sinir);
    QString s = QString::number(sayi);
    ui->lbl_sinir->setText(s);
}

void MainWindow::on_rbtn_bir_clicked()
{
    ui->list_bir->setEnabled(true);
    ui->list_iki->setDisabled(true);
}

void MainWindow::on_rbtn_iki_clicked()
{
   ui->list_bir->setEnabled(true);
   ui->list_iki->setEnabled(true);
}

void MainWindow::on_btn_yarisma_clicked()
{
    int sayac = 0;
    int sayac2 = 0;
    ui->list_bir->clear();
    ui->list_iki->clear();
   int rastgele=ui->lbl_sinir->text().toInt();
   int sinir = ui->spinBox->value();
   if(ui->rbtn_bir->isChecked()){

       int dongu = 0;
       while (dongu == 0) {
           sayac= sayac+1;
           int oyuncusayi = QRandomGenerator::global()->bounded(0,sinir);
           QString oyuncusayiS = QString::number(oyuncusayi);
           ui->list_bir->addItem(oyuncusayiS);
           if(oyuncusayi == rastgele){
               dongu = 1;
               QString ss = QString ::number(sayac);
               ui->list_bir->addItem(ss +". adimda bulundu");
           }
       }
   }
   if(ui->rbtn_iki->isChecked()){
       int sayac = 0;
       int dongu = 0;
       while (dongu == 0) {
           sayac= sayac+1;
           int oyuncusayi = QRandomGenerator::global()->bounded(0,sinir);
           QString oyuncusayiS = QString::number(oyuncusayi);
           ui->list_bir->addItem(oyuncusayiS);
           if(oyuncusayi == rastgele){
               dongu = 1;
               QString ss = QString ::number(sayac);
               ui->list_bir->addItem(ss +". adimda bulundu");
           }
       }
//       ------------------------------------------------

       int dongu2 = 0;
       while (dongu2 == 0) {
           sayac2= sayac2+1;
           int oyuncusayi = QRandomGenerator::global()->bounded(0,sinir);
           QString oyuncusayiS = QString::number(oyuncusayi);
           ui->list_iki->addItem(oyuncusayiS);
           if(oyuncusayi == rastgele){
               dongu2 = 1;
               QString ss2 = QString ::number(sayac2);
               ui->list_iki->addItem(ss2 +". adimda bulundu");
           }

       }
       if(sayac == sayac2){
           QMessageBox msgBox;
                   msgBox.setText("Berabere");
                   msgBox.exec();
       }
    else if(sayac>sayac2){
        QMessageBox msgBox;
                msgBox.setText("2. Oyuncu Kazandi");
                msgBox.exec();
    }
    else  {
        QMessageBox msgBox;
                msgBox.setText("1.oyuncu kazandi");
                msgBox.exec();
    }
   }


}

void MainWindow::on_spinBox_valueChanged(int arg1)
{

}
