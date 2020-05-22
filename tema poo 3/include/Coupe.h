#include"Masina.h"

class Coupe:public Masina{
    public:
        Coupe();
        Coupe(char[],int);
        virtual ~Coupe();
        void afisare(ostream&);
        friend istream& operator>>(istream&,Coupe&);
};
