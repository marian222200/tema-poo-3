#include "Expozitie_Supersport.h"

void Expozitie<Supersport>::citire(istream& input){
    input>>this->nr_masini_expuse;
    for(int i=0;i<this->nr_masini_expuse;i++)input>>this->Masini[i];
}
istream& operator>>(istream&input,Expozitie<Supersport> e){
    e.citire(input);
}
void Expozitie<Supersport>::adauga(Supersport m){
    (this->Masini)[this->nr_masini_expuse++]=m;
    //cout<<" "<<typeid(m).name();
}
void Expozitie<Supersport>::afisare(ostream& out){
    for(int i=0;i<this->nr_masini_expuse;i++)(this->Masini[i]).afisare(out),out<<" ";
}
void Expozitie<Supersport>::afisare_vandute(ostream& out){
    for(int i=0;i<this->nr_masini_vandute;i++)(this->Masini_Vandute[i]).afisare(out),out<<" ";
}
void Expozitie<Supersport>::vanzare(int pozitie){
    this->Masini_Vandute[this->nr_masini_vandute++]=this->Masini[pozitie];
    this->Masini[pozitie]=this->Masini[--this->nr_masini_expuse];
}
void operator-=(Expozitie<Supersport> &e, Supersport m){
    int i=0,gasit=0;
    while(i<e.nr_masini_expuse&&gasit==0){
        if(e.Masini[i]==m)gasit=1;
        i++;                                      ///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    }
    if(gasit)e.vanzare(i-1);
    else{
        m.afisare(cout);
        cout<<"\n";
    throw(Masina_inexistenta("Masina nu exista!"));
  }
    //cout<<i-1;
}
Expozitie<Supersport>::~Expozitie(){
}
