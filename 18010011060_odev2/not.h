#ifndef NOT_H
#define NOT_H

#include <QDialog>
#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class Not;
}

class Not : public QDialog
{
    Q_OBJECT

public:
    explicit Not(QSqlDatabase, QWidget *parent = nullptr);
    ~Not();
    void notlariGoster();

private slots:
    void on_tbvwNotTumOgr_clicked(const QModelIndex &index);

    void on_tbvwNotTumDers_clicked(const QModelIndex &index);

    void on_btnDersKayitEkle_clicked();

private:
    Ui::Not *ui;
    QSqlQuery *sorguNot;
    QSqlQueryModel *modelNot;
    QSqlQueryModel *modelTNot;

};

#endif // NOT_H
