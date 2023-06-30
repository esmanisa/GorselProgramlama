#include <iostream>

using namespace std;

class Calisan{
public:
    string ad;
    int yas;
    Calisan(string ad, int yas)
    {
        this->ad = ad;
        this->yas = yas;
    }
    void BilgileriYazdir()
    {
        cout << "Ad: " << ad << " Yas: "<< yas <<endl;
    }

    virtual void yapilanIs()
    {
        cout << ad << " mailleri cevaplar ve telefonlara bakar."<<endl;
    }
};

class Yazilimci:public Calisan{
public:
    string kd;
    Yazilimci(string ad, int yas, string kd):Calisan(ad, yas)
    {
        this->kd = kd;
    }
    void hatayiCoz()
    {
        cout << ad << " hatalari " << kd << " kullanarak cozer."<<endl;
    }
    void yapilanIs()
    {
        cout << ad << " " << kd << " dilini kullanarak kodlama yapar."<<endl;
    }
};

class Egitmen:public Calisan
{
public:
    string ve;
    Egitmen(string ad, int yas, string ve):
        Calisan(ad, yas)
    {
        this->ve = ve;
    }

    void egitimeHazirlan()
    {
        cout <<ad<< " verecegi "<<ve<<" egitimine hazirlanir."<<endl;
    }

    void yapilanIs()
    {
        cout << ad << " " << ve << " egitimini verir."<<endl;
    }
};

int main()
{
    Calisan c=Calisan("Ali", 30);
    Yazilimci y=Yazilimci("Ayse", 30, "C++");
    Egitmen e=Egitmen("Seda", 28, "ilk yardim");

    c.BilgileriYazdir();
    y.hatayiCoz();
    e.egitimeHazirlan();

    c.yapilanIs();
    y.yapilanIs();
    e.yapilanIs();

    Calisan *c1=&y;
    Calisan *c2=&e;

    c1->yapilanIs();
    c2->yapilanIs();
}

