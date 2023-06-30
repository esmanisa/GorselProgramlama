#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->yaziAlani->setText("Merhaba Qt");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_clicked()
{
    QString yazi;
    yazi = ui->yazmaAlani->toPlainText();
    ui->yaziAlani->setText(yazi);

}
