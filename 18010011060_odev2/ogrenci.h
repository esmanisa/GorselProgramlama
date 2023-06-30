#ifndef OGRENCI_H
#define OGRENCI_H

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
class Ogrenci;
}

class Ogrenci : public QDialog
{
    Q_OBJECT

public:
    explicit Ogrenci(QSqlDatabase, QWidget *parent = nullptr);
    ~Ogrenci();
    void ogrencileriGoster();

private slots:
    void on_tbvwOgrenciler_clicked(const QModelIndex &index);

    void on_btnOgrenciYeniKayit_clicked();

    void on_btnOgrenciSil_clicked();

    void on_btnOgrenciGuncelle_clicked();

private:
    Ui::Ogrenci *ui;
    QSqlQuery *sorguOgrenci;
    QSqlQueryModel *modelOgrenci;
    QSqlQueryModel *modelTOgrenci;

};

#endif // OGRENCI_H
