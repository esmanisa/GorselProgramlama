#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->btnConnect, &QPushButton::clicked, this, &Dialog::yazDbg);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::yazDbg()
{
    qInfo() << "Buton tıklanma zamanı: " << QDateTime::currentDateTime().toString();
    accept(); // pencereyi kapatır
}

void Dialog::on_btnEditor_clicked()
{
    qDebug() << "Debug ekranına yazdım.";
    yazDbg();
}

