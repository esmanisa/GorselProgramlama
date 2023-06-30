#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->scrollArea);
    ui->actionAc->setIcon(QApplication::style()->standardIcon(QStyle::SP_DialogOpenButton));
    ui->actionZoom_in->setIcon(QApplication::style()->standardIcon(QStyle::SP_ArrowDown));
    ui->actionZoom_out->setIcon(QApplication::style()->standardIcon(QStyle::SP_ArrowUp));
    lblResim=new QLabel(this);
    ui->scrollArea->setWidget(lblResim);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAc_triggered()
{
    mPath = QFileDialog::getOpenFileName(this, "Dosya Ac", QString(), "All Files(*.*);;PNG(*.png);;JPEG(*.jpg)");
    if (mPath.isEmpty())
        return;
    if(!mResim.load(mPath))
    {
        QMessageBox::critical(this, "HATA!", "Dosya Açılamadı!", "Tamam");
    }
    lblResim->setPixmap(mResim);
}

void MainWindow::on_actionZoom_in_triggered()
{
    int w = lblResim->width();
    int h = lblResim->height();

    w += 10;
    h += 10;

    lblResim->resize(w, h);
    lblResim->setPixmap(mResim.scaled(w, h));
}

void MainWindow::on_actionZoom_out_triggered()
{
    int w = lblResim->width();
    int h = lblResim->height();

    w -= 10;
    h -= 10;

    lblResim->resize(w, h);
    lblResim->setPixmap(mResim.scaled(w, h));
}
