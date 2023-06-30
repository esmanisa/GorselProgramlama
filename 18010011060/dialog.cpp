#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

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

int minDeger, maxDeger,sayi;
QString min, max;

void Dialog::on_btnRndSayiUret_clicked()
{

    ui->lblUretilenSayi->setText(QString::number(rand()%ui->spinBoxUstDeger->value()));
    /*srand(time(0));
    maxDeger = ui->spinBoxUstDeger->value();
    minDeger = ui->spinBoxUstDeger->minimum();

    sayi = rand()%(maxDeger-minDeger)+maxDeger;

    QString str = QString::number(sayi);

    ui->lblUretilenSayi->setText(str);*/
}

void Dialog::on_spinBoxUstDeger_valueChanged(int maxDeger)
{
    ui->lblAralik->setText("0 ile "+QString::number(maxDeger)+" arasında sayi tahmin oyunu başlıyor.");
}

void Dialog::on_rdTekOyuncu_clicked()
{
    ui->lwOyuncu1->setEnabled(true);
    ui->lwOyuncu2->setEnabled(false);

}

void Dialog::on_rdIkiOyuncu_clicked()
{
    ui->lwOyuncu1->setEnabled(true);
    ui->lwOyuncu2->setEnabled(true);
}


void Dialog::on_btnBaslat_clicked()
{
    int tahmin1, tahmin2, ds1=0, ds2=0;


    if(ui->rdTekOyuncu->isChecked())
    {
        ui->lwOyuncu1->clear();
        ds1=0;
        while(true)
        {
            tahmin1 = rand()%ui->spinBoxUstDeger->value();
            ds1++;
            ui->lwOyuncu1->addItem(QString::number(tahmin1));
            if(ui->lblUretilenSayi->text() == QString::number(tahmin1))
            {
                ui->lwOyuncu1->addItem("Deneme sayısı: "+QString::number(tahmin1));
                QMessageBox::information(this, "Tebrikler!!", "Tebrikler Oyuncu 1, "+QString::number(ds1)+" denemede KAZANDINIZ!!!");
                break;
            }
        }
    }
    else if(ui->rdIkiOyuncu->isChecked())
    {
        ds1=0, ds2=0;
        ui->lwOyuncu1->clear();
        ui->lwOyuncu2->clear();
        while(true)
        {
            tahmin1 = rand()%ui->spinBoxUstDeger->value();
            ds1++;
            ui->lwOyuncu1->addItem(QString::number(tahmin1));

            if (ui->lblUretilenSayi->text() == QString::number(tahmin1))
            {
                ui->lwOyuncu1->addItem("Deneme sayısı: "+QString::number(ds1));
                break;
            }
        }
        while (true)
        {
            tahmin2 = rand()%ui->spinBoxUstDeger->value();
            ds2++;
            ui->lwOyuncu2->addItem(QString::number(tahmin2));

            if (ui->lblUretilenSayi->text() == QString::number(tahmin2))
            {
                ui->lwOyuncu2->addItem("Deneme sayısı: "+QString::number(ds2));
                break;
            }
        }
        if(ds1 < ds2)
        {
            QMessageBox::information(this, "Tebrikler!!", "Tebrikler Oyuncu 1 "+QString::number(ds1)+" deneme ile kazandınız.");
        }
        else if (ds2 == ds1)
        {
            QMessageBox::information(this, "Tebrikler!!", "Tebrikler Oyuncu 1 ve Oyuncu 2 "+QString::number(ds2)+" deneme ile kazandınız.");
        }
        else
            QMessageBox::information(this, "Tebrikler!!", "Tebrikler Oyuncu 2 "+QString::number(ds2)+" deneme ile kazandınız.");
    }
}
