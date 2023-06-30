#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //connect(ui->btnCikis, &QPushButton::clicked,this,&QDialog::reject());
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnCikis_clicked()
{
    QDialog::reject();
}

void Dialog::on_btnHesapla_clicked()
{
    QString ad, dersad, vize_not, final_not;
    ad = ui->lblName->text();
    dersad = ui->lblLesson->text();
    vize_not = ui->lblVize->text();
    final_not = ui->lblFinal->text();


    if(ad=="" || dersad=="" || final_not== "" || vize_not=="")
    {
        ui->text_Sonuc->setText("Eksik bilgi girdiniz, lütfen kontrol edip tekrar deneyiniz.");
    }
    else
    {
        int vn, fn, gecme_not;
        vn = vize_not.toInt();
        fn=final_not.toInt();
        gecme_not = (vn*0.4)+(fn*0.6);

        if(gecme_not >= 60)
        {
            ui->text_Sonuc->setText(ad+" isimli öğrenci "+dersad+" isimli dersten geçmiştir. Geçme notu: "+QString::number(gecme_not));
        }
        else
        {
            ui->text_Sonuc->setText(ad+" isimli öğrenci "+dersad+" isimli dersten kalmıştır. Geçme notu: "+QString::number(gecme_not));
        }
    }
}
