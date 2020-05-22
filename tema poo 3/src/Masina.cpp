#include "Masina.h"

Masina::Masina(char model[],int pret){
    this->pret=pret;
    strcpy(this->model,model);
}
void Masina::afisare(ostream& out){
    out<<this->model<<" "<<this->pret;
}
void Masina::citire(istream& input){
    input>>this->model>>this->pret;
}
Masina& Masina::operator=(Masina& other){
    this->pret=other.pret;
    if(strcmp(this->model,other.model)!=0)strcpy(this->model,other.model);
    return other;
}
bool operator==(Masina m1,Masina m2){
    if(m1.pret!=m2.pret)return 0;
    if(strcmp(m1.model,m2.model)!=0)return 0;
}
Masina::Masina(){
}
Masina::~Masina(){
}
istream&operator>>(istream&input,Masina &m){
    m.citire(input);
    return input;
}
