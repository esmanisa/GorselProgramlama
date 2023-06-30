#ifndef BALON_H
#define BALON_H

#include "mainwindow.h"
#include <QLabel>
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QMouseEvent>
#include <QTimer>
#include <QRandomGenerator>

class balon : public QLabel
{
    Q_OBJECT
public:
    explicit balon(QWidget *parent=0);
    balon();
    bool isClicked;
    void baloons();
    void mousePressEvent(QMouseEvent *event);
    QList <QLabel*> baloonList;

signals:
    void clicked();

public slots:
    void hareket();
    void move();

};

#endif // BALON_H
