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
    init();
}


void Dialog::init()
{
    btnBack=new QPushButton("Geri", this);
    btnNext=new QPushButton("İleri", this);

    ui->buttonBox->addButton(btnBack, QDialogButtonBox::ButtonRole::ActionRole);
    ui->buttonBox->addButton(btnNext, QDialogButtonBox::ButtonRole::ActionRole);

    connect(btnBack, &QPushButton::clicked, this, &Dialog::next);
    connect(btnNext, &QPushButton::clicked, this, &Dialog::next);
    connect(&server, &Server::changed, this, &Dialog::changeEvent);

    enableButton();
}


void Dialog::on_btnStart_clicked()
{
    quint16 port=static_cast<quint16>(ui->spinBox->value());
    server.setMessage(ui->txtMesaj->text()+"/r/n");

    if(!server.listen(QHostAddress::Any, port))
    {
        QMessageBox::critical(this, "Hata", server.errorString());
        return;
    }
    ui->lblStatus->setText("Sunucu Dinliyor");
    enableButton();
}

void Dialog::on_btnStop_clicked()
{
    server.close();
    ui->lblStatus->setText("Sunucu kapandı");
    enableButton();
}

void Dialog::next()
{
    int i=ui->stackedWidget->currentIndex();
    i++;
    if(i>ui->stackedWidget->count()) ui->stackedWidget->count();
    ui->stackedWidget->setCurrentIndex(i);
    enableButton();
}

void Dialog::back()
{
    int i=ui->stackedWidget->currentIndex();
    i--;
    if(i<0) i = 0;
    ui->stackedWidget->setCurrentIndex(i);
    enableButton();
}

void Dialog::changed()
{
    ui->lblStatus->setText(QString("Su anda %0 kullanıcı baglı.").arg(server.count()));
}

void Dialog::enableButton()
{
    ui->btnStart->setEnabled(!server.isListening());
    ui->btnStop->setEnabled(server.isListening());

    if(ui->stackedWidget->count() <= 1)
    {
        btnNext->setEnabled(false);
        btnBack->setEnabled(false);
        return;
    }
    if(ui->stackedWidget->currentIndex() == 0)
    {
        btnNext->setEnabled(true);
        btnBack->setEnabled(false);
        return;
    }
    if(ui->stackedWidget->currentIndex() >= ui->stackedWidget->count() - 1)
    {
        btnNext->setEnabled(false);
        btnBack->setEnabled(true);
    }

}
