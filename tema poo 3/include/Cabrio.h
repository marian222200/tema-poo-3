#include"Masina.h"

class Cabrio:public Masina{
    public:
        Cabrio();
        Cabrio(char[],int);
        virtual ~Cabrio();
        void afisare(ostream&);
        friend istream& operator>>(istream&,Cabrio&);
};
