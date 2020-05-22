#include "Supersport.h"
Supersport::Supersport(char model[],int pret):Masina(model,pret){
}
Supersport::Supersport():Masina(){
}

Supersport::~Supersport(){
}

void Supersport::afisare(ostream& out){
    out<<"Supersport "<<this->model<<" "<<this->pret;
}
istream& operator>>(istream&input,Supersport &m){
    m.citire(input);
    return input;
}
Supersport& Supersport::operator=(Supersport& other){
    this->pret=other.pret;
    if(strcmp(this->model,other.model)!=0)strcpy(this->model,other.model);
    return other;
}
bool operator==(Supersport m1,Supersport m2){
    if(m1.pret!=m2.pret)return 0;
    if(strcmp(m1.model,m2.model)!=0)return 0;
    return 1;
}
