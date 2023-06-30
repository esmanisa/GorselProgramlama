#include "dialog.h"
#include "ui_dialog.h"
#include "QTextStream"
#include "Ogrenci.cpp"
#include "QDebug"

QList <Ogrenci*> ogrenciler;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    /*QFile file("gecenler.txt");
    if(!file.exists())
    {
        QMessageBox::information(this, "UYARI!", "Böyle bir dosya bulunmamaktadır.", "Tamam");
        return;
    }
    else if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this, "UYARI!", file.errorString(), "Tamam");
        return;
    }
    QTextStream stream(&file);
    while(!stream.atEnd())
    {
        ui->lwGecenler->addItem(stream.readLine());
    }
    file.close();

    QFile file1("kalanlar.txt");
    if(!file1.exists())
    {
        QMessageBox::information(this, "UYARI!", "Böyle bir dosya bulunmamaktadır.", "Tamam");
        return;
    }
    else if (!file1.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this, "UYARI!", file1.errorString(), "Tamam");
        return;
    }
    QTextStream stream1(&file);
    while(!stream1.atEnd())
    {
        ui->lwGecenler->addItem(stream1.readLine());
    }
    file1.close();*/

}

Dialog::~Dialog()
{
    QFile file("tumogrenciler.txt");
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this, "UYARI!", file.errorString(), "Tamam");
        return;
    }

    QTextStream stream(&file);
    Ogrenci *ogr;
    foreach(ogr, ogrenciler)
    {
        stream << ogr->ad+" "+ogr->soyad+" Geçme Notu: "+QString::number(ogr->gecmeNotHesapla(ogr->vizeNot, ogr->finalNot))+"\n";
    }
    file.close();
    delete ui;
}


void Dialog::on_btnHesapla_clicked()
{
    Ogrenci *ogr=new Ogrenci(ui->lnAd->text(), ui->lnSoyad->text(), ui->lnVize->text().toInt(), ui->lnFinal->text().toInt());
    ogrenciler.append(ogr);
    double gecmeNot = ogr->gecmeNotHesapla(ogr->vizeNot, ogr->finalNot);

    if(gecmeNot < 60.0)
    {
        ui->lwKalanlar->addItem(ogr->ad+" "+ogr->soyad+" Geçme Notu:"+QString::number(gecmeNot));
        QFile file("kalanlar.txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
            QMessageBox::information(this, "UYARI!", file.errorString(), "Tamam");
            return;
        }

        QTextStream stream(&file);
        stream << ogr->ad+" "+ogr->soyad+" Geçme Notu:"+QString::number(gecmeNot)+"\n";
        file.close();
    }
    else
    {
        ui->lwGecenler->addItem(ogr->ad+" "+ogr->soyad+" Geçme Notu:"+QString::number(gecmeNot));
        QFile file("gecenler.txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
            QMessageBox::information(this, "UYARI!", file.errorString(), "Tamam");
            return;
        }

        QTextStream stream(&file);
        stream << ogr->ad+" "+ogr->soyad+" Geçme Notu:"+QString::number(gecmeNot)+"\n";
        file.close();
    }


    /*double gecmeNot;
    gecmeNot = (ui->lnVize->text().toDouble() * 0.4) + (ui->lnFinal->text().toDouble() * 0.6);
    if(gecmeNot >= 60)
    {
        ui->lwGecenler->addItem(ui->lnAd->text()+" "+ui->lnSoyad->text()+" Geçme Notu:"+QString::number(gecmeNot));
        QFile file("gecenler.txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
            QMessageBox::information(this, "UYARI!", file.errorString(), "Tamam");
            return;
        }

        QTextStream stream(&file);
        stream << ui->lnAd->text()+" "+ui->lnSoyad->text()+" Geçme Notu:"+QString::number(gecmeNot)+"\n";
        file.close();
    }
    else
    {
        ui->lwGecenler->addItem(ui->lnAd->text()+" "+ui->lnSoyad->text()+" Geçme Notu:"+QString::number(gecmeNot));
        QFile file("kalanlar.txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
            QMessageBox::information(this, "UYARI!", file.errorString(), "Tamam");
            return;
        }

        QTextStream stream(&file);
        stream << ui->lnAd->text()+" "+ui->lnSoyad->text()+" Geçme Notu:"+QString::number(gecmeNot)+"\n";
        file.close();
    }*/
}
