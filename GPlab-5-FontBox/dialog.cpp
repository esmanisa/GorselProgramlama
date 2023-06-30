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


void Dialog::on_btnUygula_clicked()
{
    ui->lblGoster->setEnabled(true);
    QString yaziTipi=ui->fontComboBox->currentText();
    int size = ui->spinSize->value();

    QString yazi = ui->lnYaz->text();
    ui->lblGoster->setText(yazi);
    // Stil Ayarlamaları

    QFont font(yaziTipi, size);

    if (ui->cbBold->isChecked())
    {
        font.setBold(true);
    }
    if (ui->cbItalik->isChecked())
    {
        font.setItalic(true);
    }

    QPalette color;
    color.setColor(QPalette::WindowText, ui->comboRenk->currentText()); //comboboxtaki rengi aldık

    ui->lblGoster->setFont(font);
    ui->lblGoster->setPalette(color);
}
