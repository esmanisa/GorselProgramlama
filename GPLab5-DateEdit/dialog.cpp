#include "dialog.h"
#include "ui_dialog.h"
#include "QMessageBox"

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


void Dialog::on_btnHesapla_clicked()
{
    int dogumYil = ui->dEBirthdate->date().year();
    QDateTime current_date = QDateTime::currentDateTime();
    int current_year = current_date.date().year();

    int yas = current_year - dogumYil;

    double boy = ui->dsbBoy->value();
    int kg = ui->sbKilo->value();

    double vki = kg / (boy * boy);

    if (yas > 40)
    {
        if (vki < 18.6)
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Zayıf, Yaşa Dikkat Edilmeli</font>", "Tamam");
        }
        else if(vki < 24.9)
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Normal Kilolu, Yaşa Dikkat Edilmeli</font>", "Tamam");
        }
        else if (vki < 29.9)
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Fazla Kilolu, Yaşa Dikkat Edilmeli</font>", "Tamam");
        }
        else
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Obez, Yaşa Dikkat Edilmeli</font>", "Tamam");
        }
    }
    else
    {
        if (vki < 18.6)
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Zayıf</font>", "Tamam");
        }
        else if(vki < 24.9)
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Normal Kilolu</font>", "Tamam");
        }
        else if (vki < 29.9)
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Fazla Kilolu</font>", "Tamam");
        }
        else
        {
            QMessageBox::information(this, "VKI Sonuç", "<font color= '#ff0000'>Obez</font>", "Tamam");
        }
    }
}
