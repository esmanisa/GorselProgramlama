#include "dialog.h"
#include "ui_dialog.h"
#include "QString"
#include "QMessageBox"
#include "QtDebug"
#include "QSettings"
#include "QVariant"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    yukle();
    ui->cmbDemirbas->setEditable(true);
    demirbasYukle();
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_cmbRenk_currentIndexChanged(const QString &arg1)
{
    QString yazi="Seçtiğiniz renk...:"+arg1;
    ui->lblRenk->setText(yazi+" "+arg1);
    this->setStyleSheet("background-color: "+arg1);
}

void Dialog::on_btnHatirla_clicked()
{
    QSettings settings("NEUBilMuh", "gpd5h");
    settings.setValue("ayarlar", ui->cmbRenk->currentIndex());
    QMessageBox::information(this, "Secim Kaydedildi", QString::number(ui->cmbRenk->currentIndex()));
}

void Dialog::yukle()
{
    QSettings setting("NEUBilMuh", "gpd5h");
    QVariant value=setting.value("ayarlar", 0);

    int index = value.toInt();
    qDebug() << value << index;

    if(index < ui->cmbRenk->count())
    {
        ui->cmbRenk->setCurrentIndex(index);
    }
    else
    {
        ui->cmbRenk->setCurrentIndex(0);
    }
}

void Dialog::demirbasYukle()
{
    QSettings setting("NeuBilMuh", "GPDers-5");

    ui->cmbDemirbas->setCurrentText(setting.value("text", "").toString());

    qDebug() << "fonk yukle demirbas" << setting.value("text", "").toString();

    int combosize = setting.beginReadArray("combo");

    for(int i=0; i < combosize; i++)
    {
        setting.setArrayIndex(i);
        ui->cmbDemirbas->addItem(setting.value("item", "").toString());
    }
    setting.endArray();

    int listsize = setting.beginReadArray("list");

    for (int i=0; i<listsize; i++)
    {
        setting.setArrayIndex(i);
        ui->listDemirbas->addItem(setting.value("item", "").toString());
    }
    setting.endArray();

}

void Dialog::kaydet()
{
    QSettings settings("NeuBilMuh", "GPDers-5");
    settings.clear();

    settings.setValue("text", ui->cmbDemirbas->currentText());

    settings.beginWriteArray("combo");

    for (int i=0; i < ui->listDemirbas->count(); i++)
    {
        settings.setArrayIndex(i);
        settings.setValue("item", ui->listDemirbas->item(i)->text());
    }
    settings.endArray();
}

void Dialog::on_btnDemirbasEkle_clicked()
{
    if(ui->cmbDemirbas->findText(ui->cmbDemirbas->currentText()) < 0)
    {
        ui->cmbDemirbas->addItem(ui->cmbDemirbas->currentText());
    }
    ui->listDemirbas->addItem(ui->cmbDemirbas->currentText());
}

void Dialog::on_btnKayitSil_clicked()
{
    QList <QListWidgetItem*> items = ui->listDemirbas->selectedItems();
    foreach(QListWidgetItem* item, items)
    {
        ui->listDemirbas->removeItemWidget(item);
        delete item;
    }
}

void Dialog::on_btnTemizle_clicked()
{
    ui->cmbDemirbas->clear();
    ui->listDemirbas->clear();
    return;
}

void Dialog::on_btnTamam_clicked()
{
    kaydet();
    accept();
    return;
}

void Dialog::on_btnIptal_clicked()
{
    reject();
    return;
}
