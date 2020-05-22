#include "Cabrio.h"
Cabrio::Cabrio(char model[],int pret):Masina(model,pret){
}
Cabrio::Cabrio():Masina(){
}

Cabrio::~Cabrio(){
}

void Cabrio::afisare(ostream& out){
    out<<"Cabrio "<<this->model<<" "<<this->pret;
}
istream& operator>>(istream&input,Cabrio &m){
    m.citire(input);
    return input;
}
