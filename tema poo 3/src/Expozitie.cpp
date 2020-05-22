#include "Expozitie.h"
template <typename T>
void Expozitie<T>::citire(istream& input){
    input>>this->nr_masini_expuse;
    for(int i=0;i<this->nr_masini_expuse;i++)input>>this->Masini[i];
}
template <typename T>
istream& operator>>(istream&input,Expozitie<T> e){
    e.citire(input);
}
template <typename T>
void Expozitie<T>::adauga(T m){
    (this->Masini)[this->nr_masini_expuse++]=m;
    //cout<<" "<<typeid(m).name();
}
template <typename T>
void Expozitie<T>::afisare(ostream& out){
    for(int i=0;i<this->nr_masini_expuse;i++)(this->Masini[i]).afisare(out),out<<" ";
}

