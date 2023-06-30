#include "dialog.h"
#include "ui_dialog.h"
#include "QString"
#include "QDebug"
#include "QObjectList"
#include "QRadioButton"
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


void Dialog::on_btnTemizle_clicked()
{
    ui->plainTextEdit->clear();
}

void Dialog::on_btnListele_clicked()
{
    QString secimler;
    QObjectList boxes = this->children();
    foreach(QObject *obj, boxes)
    {
        if(obj->inherits("QCheckBox"))
        {
            QCheckBox* box_ptr = qobject_cast<QCheckBox*>(obj);
            if (box_ptr->isChecked())
                secimler+=box_ptr->text()+"\r\n";
        }
    }


    if(ui->cbVites->isChecked())
        ui->grpVites->setEnabled(true);
    if(ui->cbYakit->isChecked())
        ui->grpYakit->setEnabled(true);
    if(ui->cbYas->isChecked())
        ui->grpYas->setEnabled(true);

    ui->plainTextEdit->appendPlainText(secimler);
}

void Dialog::on_btnAltSecenek_clicked()
{
    QString vites = secimAl(ui->grpVites);
    QString yakit = secimAl(ui->grpYakit);
    QString yas = secimAl(ui->grpYas);

    QString altSecimler = "Vites: "+vites+"\r\nYakıt: "+yakit+"\r\nYaş: "+yas;

    QMessageBox::information(this, "Secimleriniz", altSecimler);
}

QString Dialog::secimAl(QObject* obj)
{
    QString deger = "Hicbiri";

    QList <QRadioButton*> lst = obj->findChildren<QRadioButton*>(QString(), Qt::FindDirectChildrenOnly);

    foreach (QRadioButton* radio, lst)
    {
        if (radio->isChecked())
        {
            deger = radio->text();
            break;
        }
    }
    return deger;
}
