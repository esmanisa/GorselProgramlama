#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>  //sorgu yapılacağı için eklendi
#include <QSqlQueryModel>  // Sorguları toggle view da göstermek için eklendi.
#include <QSqlError>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnOturum_clicked();

    void on_btnOduncVer_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase sqlitedb=QSqlDatabase::addDatabase("QSQLITE");
    QSqlQueryModel *model;
};
#endif // MAINWINDOW_H
