#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

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

int sayi;
QString birinci_aralik, ikinci_aralik;
int b_aralik, i_aralik;

void Dialog::on_btnSayiUret_clicked()
{
    srand(time(0));
    birinci_aralik = ui->lneditAralik1->text();
    ikinci_aralik = ui->lneditAraik2->text();
    b_aralik = birinci_aralik.toInt();
    i_aralik = ikinci_aralik.toInt();

    sayi = rand()%(i_aralik-b_aralik)+b_aralik;

    qDebug() << sayi;
}

int ds=0;

void Dialog::on_btnTahminEt_clicked()
{
    ui->btnTahminEt->setAutoRepeat(true);

    int tahmin = rand()%(i_aralik-b_aralik)+b_aralik;
    ds++;
    QString string = QString::number(ds);

    if(sayi != tahmin)
    {
        ui->textSonuc->setText("Doğru tahmin edilmedi. Deneme sayısı: "+string);
    }
    else
    {
        ui->textSonuc->setText("Tebrikler! Doğru tahmin edildi. Deneme sayısı: "+string);
        ui->btnTahminEt->setVisible(false);
    }
}
