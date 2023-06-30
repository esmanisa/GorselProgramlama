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
    void on_rdBtnLisans_clicked();

    void on_rdBtnLisanustu_clicked();

    void on_btnYazdir_clicked();

    void on_btnSorgula_clicked();

    void on_btnDurumYazdir_clicked();

    bool mezuniyetSorgula();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
