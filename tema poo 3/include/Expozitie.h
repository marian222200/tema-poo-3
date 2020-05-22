#include"Masina.h"
#include"Supersport.h"
#include"Hot_Hatch.h"
#include"Coupe.h"
#include"Cabrio.h"
#include<typeinfo>
template <typename T>
class Expozitie{
    T *Masini;
    int nr_masini_expuse;
    public:
        Expozitie(){Masini=new T[101];}
        virtual ~Expozitie();
        void citire(istream&);
        void adauga(T);
        friend istream& operator>>(istream&,Expozitie&);
        virtual void afisare(ostream&);
};
