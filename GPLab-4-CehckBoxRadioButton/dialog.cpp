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


void Dialog::on_rdBtnLisans_clicked()
{
    ui->grpSinif->setEnabled(true);
    ui->grpDerslerLisans->setEnabled(true);
    ui->grpDurum->setEnabled(false);
    ui->grpDerslerLUstu->setEnabled((false));
}

void Dialog::on_rdBtnLisanustu_clicked()
{
    ui->grpSinif->setEnabled(false);
    ui->grpDerslerLisans->setEnabled(false);
    ui->grpDurum->setEnabled(true);
    ui->grpDerslerLUstu->setEnabled((true));
}

void Dialog::on_btnYazdir_clicked()
{
    QString ad,soyad,bolum,seviye;
    ad = ui->lneditName->text();
    soyad = ui->lneditSurname->text();
    bolum = ui->lneditDepartment->text();

    // 1. Yöntem
    /*Groupbox içinde olmasaydı çalışırdı.
    QObjectList objler=this->children();

    foreach(QObject *obj, objler)
    {
        QRadioButton *rd = qobject_cast<QRadioButton*>(obj);
        if(rd->isChecked())
        {
            seviye=rd->text();
        }
    }*/
    //2. Yöntem

    /*QObject *obj=ui->grpEgitim;
    QList<QRadioButton*> liste=obj->findChildren<QRadioButton*>(QString(),Qt::FindDirectChildrenOnly);
    foreach(QRadioButton *rd, liste)
    {
        if(rd->isChecked())
            seviye=rd->text();
    }*/

    //3. Yöntem
    if(ui->rdBtnLisans->isChecked())
    {
        seviye=ui->rdBtnLisans->text();
    }
    if(ui->rdBtnLisanustu->isChecked())
    {
        seviye = ui->rdBtnLisanustu->text();
    }
    QMessageBox::information(this, "Öğrenci Bilgileri","Ad:"+ ad+ "\n"+"Soyad:"+soyad+"\n"+"Bolum:"+bolum+"\n"+"Seviye:"+seviye);

}

void Dialog::on_btnSorgula_clicked()
{
    QString ad,soyad,bolum,seviye;
    ad = ui->lneditName->text();
    soyad = ui->lneditSurname->text();
    bolum = ui->lneditDepartment->text();

    if(ui->rdBtnLisans->isChecked())
    {
        seviye=ui->rdBtnLisans->text();
    }
    if(ui->rdBtnLisanustu->isChecked())
    {
        seviye = ui->rdBtnLisanustu->text();
    }
    if(ui->rdBtnLisans->isChecked())
    {
        if(ui->rdbtnSinif4->isChecked() && ui->cbDersAIIT->isChecked() && ui->cbTurkDiliDers->isChecked() && ui->cbISGDers->isChecked())
        {
            QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisanstan mezun olabilir.", "Tamam");
        }
        else
        {
            QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisanstan mezun olamaz.", "Tamam");
        }
    }
    if(ui->rdBtnLisanustu->isChecked())
    {
        if(ui->rdbtnTez->isChecked() && ui->cbSecmeliDers->isChecked() && ui->cbSeminerDersi->isChecked() && ui->cbTeDersi)
        {
            QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisansüstünden mezun olabilir.", "Tamam");
        }
        else
        {
            QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisansüstünden mezun olamaz.", "Tamam");
        }
    }
}


void Dialog::on_btnDurumYazdir_clicked()
{
    QString ad,soyad,bolum,seviye;
    ad = ui->lneditName->text();
    soyad = ui->lneditSurname->text();
    bolum = ui->lneditDepartment->text();

    if(ui->rdBtnLisans->isChecked())
    {
        seviye=ui->rdBtnLisans->text();
    }
    if(ui->rdBtnLisanustu->isChecked())
    {
        seviye = ui->rdBtnLisanustu->text();
    }

    bool durum=mezuniyetSorgula();
    if(seviye == "Lisans")
    {
        if(durum)
        {
            QMessageBox::information(this, "Öğrenci Bilgileri", "Öğrenci lisans mezun öğrencisidir.", "Tamam");
        }
        else
            QMessageBox::information(this, "Öğrenci Bilgileri", "Öğrenci lisans öğrencisidir.", "Tamam");
    }

    else if(seviye == "Lisansüstü")
    {
        if(durum)
        {
            QMessageBox::information(this, "Öğrenci Bilgileri", "Öğrenci lisansüstü mezun öğrencisidir.", "Tamam");
        }
        else
            QMessageBox::information(this, "Öğrenci Bilgileri", "Öğrenci lisansüstü öğrencisidir.", "Tamam");
    }
}

bool Dialog::mezuniyetSorgula()
{
    if(ui->rdBtnLisans->isChecked())
    {
        if(ui->rdbtnSinif4->isChecked() && ui->cbDersAIIT->isChecked() && ui->cbTurkDiliDers->isChecked() && ui->cbISGDers->isChecked())
        {
           // QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisanstan mezun olabilir.", "Tamam");
            return true;
        }
        else
        {
        //    QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisanstan mezun olamaz.", "Tamam");
            return false;
        }
    }
    if(ui->rdBtnLisanustu->isChecked())
    {
        if(ui->rdbtnTez->isChecked() && ui->cbSecmeliDers->isChecked() && ui->cbSeminerDersi->isChecked() && ui->cbTeDersi)
        {
           //QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisansüstünden mezun olabilir.", "Tamam");
            return true;
        }
        else
        {
            //QMessageBox::information(this, "Mezuniyet Bilgileri", "Öğrenci lisansüstünden mezun olamaz.", "Tamam");
            return false;
        }
    }
}
