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


void Dialog::on_btnParentShow_clicked()
{
    Dialog2 *dialog=new Dialog2(this);
    dialog->show();
}

void Dialog::on_btnNoParentShow_clicked()
{
    Dialog2 *dialog=new Dialog2();
    dialog->show();
}

void Dialog::on_btnParentExec_clicked()
{
    Dialog2 *dialog=new Dialog2(this);
    dialog->exec();
}

void Dialog::on_btnNoParentExec_clicked()
{
    Dialog2 *dialog=new Dialog2();
    dialog->exec();
}

void Dialog::on_btnResimSec_clicked()
{
    ResimSec *resim=new ResimSec(this);
    resim->exec();
    //listeden seçilen resmin path ını okuma ve text edit a yazma
    ui->textEdit->setText(resim->selected);
    ui->btnResimSec->setIcon(QIcon(resim->selected));

}
