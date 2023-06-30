#include "dialog.h"
#include "ui_dialog.h"

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


void Dialog::on_btnCheckable_clicked()
{
    qDebug()<<"Tiklandi mi: "<< ui->btnCheckable->isChecked();
}

void Dialog::on_btnCheckableAktif_clicked()
{
    QString message;
    if (ui->btnCheckable->isChecked())
    {
        message = "EVET tiklandi";
    }
    else
    {
        message = "HAYIR tiklanmadi.";
    }
    QMessageBox::information(this, "Durum", message);
}

void Dialog::on_btnRepeat_clicked()
{
    //basılı tutulan süre boyunca click olayı yapılacak
    qInfo() << "Buton basili durumda";
}

void Dialog::on_btnToggleRepeat_clicked()
{
    bool durum = !ui->btnRepeat->autoRepeat();
    ui->btnRepeat->setAutoRepeat(durum);
    qDebug() << "autoRepeat buton durumu: " << ui->btnRepeat->autoRepeat();
}

void Dialog::on_btnDefault_clicked()
{
    QMessageBox::information(this, "Durum", "Default Klavyeden Tıklandı");
}

void Dialog::on_btnToggleDefault_clicked()
{
    bool durum1 = !ui->btnDefault->autoDefault();
    ui->btnDefault->setAutoDefault(durum1);
    qDebug() << "autoDefault buton durum: " << ui->btnDefault->autoDefault();
}
