#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_cmbRenk_currentIndexChanged(const QString &arg1);

    void on_btnHatirla_clicked();


    void on_btnDemirbasEkle_clicked();

    void on_btnKayitSil_clicked();

    void on_btnTemizle_clicked();

    void on_btnTamam_clicked();

    void on_btnIptal_clicked();

private:
    Ui::Dialog *ui;
    void yukle();
    void demirbasYukle();
    void kaydet();
};
#endif // DIALOG_H
