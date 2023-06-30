#ifndef DIALOG_H
#define DIALOG_H
#include "dialog2.h"
#include "resimsec.h"

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
    void on_btnParentShow_clicked();

    void on_btnNoParentShow_clicked();

    void on_btnParentExec_clicked();

    void on_btnNoParentExec_clicked();

    void on_btnResimSec_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
