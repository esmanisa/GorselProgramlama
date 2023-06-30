#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "balon.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect(this, SIGNAL(timeout()), this, SLOT(timeSlot()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


int count=0;

void MainWindow::timeSlot()
{
    ui->lblSure->setText(QString::number(count));
    count++;
}


