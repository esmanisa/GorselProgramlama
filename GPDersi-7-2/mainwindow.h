#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "newbutton.h"

#include <QMainWindow>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mousePressEvent(QMouseEvent* event);

public slots:
    void degistir();


private:
    Ui::MainWindow *ui;
    QList <NewButton*> butonlar;
};
#endif // MAINWINDOW_H
