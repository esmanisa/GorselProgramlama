#include "etiket.h"

etiket::etiket(QWidget *parent) : QLabel(parent)
{
    setGeometry(150,120,100,100);
    setFrameShape(QFrame::Box);
    show();
}

void etiket::mousePressEvent(QMouseEvent *event)
{
    ilkkonum = event->pos();
}

void etiket::mouseReleaseEvent(QMouseEvent *event)
{
    int X = event->x() - ilkkonum.x() + geometry().x();
    int Y = event->y() - ilkkonum.y() + geometry().y();
    setGeometry(X, Y, geometry().width(), geometry().height());
}

