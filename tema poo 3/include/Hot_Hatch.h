#include"Masina.h"

class Hot_Hatch:public Masina{
    public:
        Hot_Hatch();
        Hot_Hatch(char[],int);
        virtual ~Hot_Hatch();
        void afisare(ostream&);
        friend istream& operator>>(istream&,Hot_Hatch&);
};
