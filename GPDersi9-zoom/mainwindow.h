#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QStyle>
#include <QFileDialog>
#include <QLabel>
#include <QMessageBox>

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
    void on_actionAc_triggered();

    void on_actionZoom_in_triggered();

    void on_actionZoom_out_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *lblResim;
    QString mPath;
    QPixmap mResim; //resmi tutmak için değişken
};
#endif // MAINWINDOW_H
