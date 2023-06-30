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
    void on_btnRndSayiUret_clicked();

    void on_spinBoxUstDeger_valueChanged(int arg1);

    void on_rdTekOyuncu_clicked();

    void on_rdIkiOyuncu_clicked();

    void on_btnBaslat_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
