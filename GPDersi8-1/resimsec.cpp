#include "resimsec.h"
#include "ui_resimsec.h"

ResimSec::ResimSec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResimSec)
{
    ui->setupUi(this);
    init();
}

ResimSec::~ResimSec()
{
    delete ui;
}

void ResimSec::on_buttonBox_accepted()
{
    selected = ui->listWidget->currentItem()->text();
    accept();
}

void ResimSec::on_buttonBox_rejected()
{
    reject();
}

void ResimSec::init()
{
    QDir root=QDir(":/file/images");
    QFileInfoList list=root.entryInfoList();
    foreach (QFileInfo fi, list)
    {
        QListWidgetItem *itm=new QListWidgetItem(ui->listWidget);
        itm->setText(fi.absoluteFilePath());
        itm->setIcon(QIcon(fi.absoluteFilePath()));
        ui->listWidget->addItem(itm);
    }
}
