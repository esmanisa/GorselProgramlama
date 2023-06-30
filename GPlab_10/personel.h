#ifndef PERSONEL_H
#define PERSONEL_H

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
class personel;
}

class personel : public QDialog
{
    Q_OBJECT

public:
    explicit personel(QSqlDatabase, QWidget *parent = nullptr);
    ~personel();
    void listele();

private slots:
    void on_btnKaydet_clicked();

    void on_tblePersonel_clicked(const QModelIndex &index);

    void on_btnGuncelle_clicked();

    void on_btnSil_clicked();

private:
    Ui::personel *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model; // personel listesine aktarmak için modele ihtiyacımız var.
};

#endif // PERSONEL_H
