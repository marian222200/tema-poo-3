#include "Hot_Hatch.h"
Hot_Hatch::Hot_Hatch(char model[],int pret):Masina(model,pret){
}
Hot_Hatch::Hot_Hatch():Masina(){
}

Hot_Hatch::~Hot_Hatch(){
}

void Hot_Hatch::afisare(ostream& out){
    out<<"Hot_Hatch "<<this->model<<" "<<this->pret;
}
istream& operator>>(istream&input,Hot_Hatch &m){
    m.citire(input);
    return input;
}
