#include "Coupe.h"
Coupe::Coupe(char model[],int pret):Masina(model,pret){
}
Coupe::Coupe():Masina(){
}

Coupe::~Coupe(){
}

void Coupe::afisare(ostream& out){
    out<<"Coupe "<<this->model<<" "<<this->pret;
}
istream& operator>>(istream&input,Coupe &m){
    m.citire(input);
    return input;
}
