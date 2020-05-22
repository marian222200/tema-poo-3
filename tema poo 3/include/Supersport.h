#include"Masina.h"

class Supersport:public Masina{
    public:
        Supersport();
        Supersport(char[],int);
        virtual ~Supersport();
        virtual void afisare(ostream&);
        friend istream& operator>>(istream&,Supersport&);
        Supersport& operator=(Supersport&);
        friend bool operator ==(Supersport,Supersport);
};
