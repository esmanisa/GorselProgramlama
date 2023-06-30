#ifndef DERSLER_H
#define DERSLER_H

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
class Dersler;
}

class Dersler : public QDialog
{
    Q_OBJECT

public:
    explicit Dersler(QSqlDatabase, QWidget *parent = nullptr);
    ~Dersler();
    void dersleriGoster();

private slots:
    void on_tbvwDersler_clicked(const QModelIndex &index);

    void on_btnDersYenKayit_clicked();

    void on_btnDersSil_clicked();

    void on_btnDersGuncelle_clicked();

private:
    Ui::Dersler *ui;
    QSqlQuery *sorguDers;
    QSqlQueryModel *modelDers;
    QSqlTableModel *modelTDers;

};

#endif // DERSLER_H
