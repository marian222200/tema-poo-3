#include <iostream>
#include"Expozitie_Supersport.h"
using namespace std;

int main()
{
    Expozitie<Supersport> e,e2,e3;



    Supersport a("ana",100),b("are",200),c("mere",300);
    a.afisare(cout);
    cout<<"\n";
    b.afisare(cout);
    cout<<"\n";
    c.afisare(cout);
    cout<<"\n";



    e.adauga(a);
    e.adauga(b);
    e.adauga(c);
    e.afisare(cout);
    cout<<"\n";



    Supersport d("are",200);
    e-=d;
    e.afisare(cout);
    cout<<"\n";


    e2.citire(cin);
    e2.afisare(cout);
    cout<<"\n";



    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        a.citire(cin);
        e2-=a;
    }
    e2.afisare(cout);
    cout<<"\n";
    e2.afisare_vandute(cout);
    cout<<"\n";



    e3.adauga(b);
    e3.adauga(c);
    Supersport x("lmao",20);
    e3-=x;
    return 0;
}
