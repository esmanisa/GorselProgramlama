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

void Dialog::itemDoubleClicked(QListWidgetItem *item)
{
    QString url=item->data(Qt::ItemDataRole::UserRole).toString();
    QDesktopServices::openUrl(QUrl(url));
}

void Dialog::init()
{
    while (ui->toolBox->count() > 0)
    {
        ui->toolBox->removeItem(0);
    }
    addCategory("Eğitim");
    addEducation();

    addCategory("Arama Motorları");
    addSearch();

    addCategory("Sosyal Medya");
    addSocial();
}

void Dialog::addCategory(QString isim)
{
    QListWidget *list=new QListWidget(this);
    ui->toolBox->addItem(list, QIcon(":/resource/resimler/Globe-icon.png"), isim);
    connect(list, &QListWidget::itemDoubleClicked, this, &Dialog::itemDoubleClicked);
}

void Dialog::addLink(QListWidget *list, QString name, QString url)
{
    QListWidgetItem *item=new QListWidgetItem(QIcon(":/resource/resimler/page.png"), name);
    item->setData(Qt::ItemDataRole::UserRole, url);
    list->addItem(item);
}

void Dialog::addEducation()
{
    QListWidget *list=qobject_cast<QListWidget*>(ui->toolBox->widget(0));
    if (!list)
    {
        qWarning() << "Eğitim Alanı ile ilgili linklerin listesi oluşturulamadı.";
        return;
    }
    addLink(list, "Erbakan Üniversitesi", "https://www.erbakan.edu.tr/");
    addLink(list, "Konya Teknik Üniversitesi", "https://www.ktun.edu.tr/");
}

void Dialog::addSocial()
{
    QListWidget *list=qobject_cast<QListWidget*>(ui->toolBox->widget(2));
    if (!list)
    {
        qWarning() << "Sosyal Medya Alanı ile ilgili linklerin listesi oluşturulamadı.";
        return;
    }
    addLink(list, "YouTube", "https://www.youtube.com/");
    addLink(list, "Instagram", "https://www.instagram.com");
}

void Dialog::addSearch()
{
    QListWidget *list=qobject_cast<QListWidget*>(ui->toolBox->widget(1));
    if (!list)
    {
        qWarning() << "Arama Motoru Alanı ile ilgili linklerin listesi oluşturulamadı.";
        return;
    }
    addLink(list, "Google", "https://www.google.com");
    addLink(list, "Yandex", "https://www.yandex.com");
}

