#include<iostream>
#include<QString>

class Ogrenci {
public:
    QString ad;
    QString soyad;
    int vizeNot, finalNot;
    Ogrenci(QString ad, QString soyad, int vizeNot, int finalNot)
    {
        this->ad = ad;
        this->soyad = soyad;
        this->vizeNot = vizeNot;
        this->finalNot = finalNot;
    }

    double gecmeNotHesapla(int vn, int fn)
    {
        double gecmeNot = (vn * 0.4) + (fn * 0.6);
        return gecmeNot;
    }
};
