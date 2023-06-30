#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    init();
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::init()
{
    dirModel.setRootPath(QDir::currentPath()); //kok dizinini atadik
    dirModel.setFilter(QDir::Filter::Drives | QDir::Filter::AllDirs | QDir::Filter::NoDotAndDotDot);  //ilk c,d drivelari, drivelerin içindeki tüm yollar, tüm yollarin içindeki tüm dosyaları aldik

    // model ile görüntüyü bağlamak, set etmek
    ui->treeView->setModel(&dirModel);
    // kolonları gizleyelim, boyut, tarih, tür vb
    for (int i=1; i < dirModel.columnCount(); i++)
    {
        ui->treeView->hideColumn(i);
    }

    fileModel.setRootPath(dirModel.rootPath()); //dirModelin o anki seçili olan rootunu aldık
    fileModel.setFilter(QDir::Filter::Files);
    // modeli görüntüye set etmek
    ui->listView->setModel(&fileModel);
}



void Dialog::on_treeView_activated(const QModelIndex &index)
{
    QString path = dirModel.filePath(index);
    qDebug() << path;
    fileModel.setFilter(QDir::Filter::Files);
    ui->listView->setModel(&fileModel);
}
