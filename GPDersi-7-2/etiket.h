#ifndef ETIKET_H
#define ETIKET_H

#include <QLabel>
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QMouseEvent>

class etiket : public QLabel
{
public:
    explicit etiket(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private:
    QPoint ilkkonum;
};

#endif // ETIKET_H
