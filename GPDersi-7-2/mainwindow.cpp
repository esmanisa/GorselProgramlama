#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newbutton.h"
#include "etiket.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *zamanlayici = new QTimer(this);  //mainwindow içinde zamanlayıcı tanımlandı
    connect(zamanlayici, SIGNAL(timeout()), this, SLOT(degistir()));  //zamanı dolduğu zaman degistir slotu cagirilacak
    zamanlayici->start(250); // zamanlayici her 250 ms sonra baslar


    etiket *etiketim = new etiket(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    NewButton *buton = new NewButton(this);
    buton->setGeometry(event->x(), event->y(), 100, 50); // 100 px genişlikte, 50 px yükseklikte buton oluşturdu.
    buton->show();
    butonlar.push_back(buton); //listeye buton elemanı eklendi.
    buton->setText(QString::number(butonlar.size()) + " nolu Buton");
    buton->setGeometry(event->x()-25, event->y() - 25, 100, 50);
    ui->statusbar->showMessage("X = " + QString::number(event->x()) + "Y = " + QString::number(event->y()));

}

void MainWindow::degistir() // slot ozelligi taşımalı, butonları hareket ettirmek için kullanıyoruz
{
    int sayi = butonlar.size();

    for (int i=0; i < sayi; i++)
    {
        if (butonlar[i]->tiklandimi)
        {
            butonlar[i]->setGeometry(butonlar[i]->x(), butonlar[i]->y() + 5, butonlar[i]->width(), butonlar[i]->height());
        }
    }
}

