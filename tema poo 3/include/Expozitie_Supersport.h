#include"Expozitie.h"
#include"Masina_inexistenta.h"
template <>
class Expozitie<Supersport>{
    Supersport *Masini_Vandute;
    int nr_masini_vandute;
    Supersport *Masini;
    int nr_masini_expuse;
    public:
        Expozitie(){nr_masini_expuse=0;nr_masini_vandute=0;Masini=new Supersport[101];Masini_Vandute=new Supersport[101];}
        virtual ~Expozitie();
        void citire(istream&);
        void adauga(Supersport);
        friend istream& operator>>(istream&,Expozitie&);
        virtual void afisare(ostream&);
        virtual void afisare_vandute(ostream&);
        friend void operator-=(Expozitie<Supersport>&,Supersport);
        void vanzare(int);
};
