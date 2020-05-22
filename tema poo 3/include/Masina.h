#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class Masina{
    protected:
    int pret;
    char model[101];
    public:
        Masina();
        Masina(char[],int);
        virtual void afisare(ostream&);
        void citire(istream&);
        Masina& operator=(Masina&);
        friend bool operator ==(Masina,Masina);
        friend istream&operator>>(istream&,Masina&);
        virtual ~Masina();
};
