#include "Medicament.h"

using namespace std;

Medicament::Medicament()
{
    //ctor
}

Medicament::~Medicament()
{
    //dtor
}


Medicament::Medicament(Date d,string s,int i,float f){
   df=d;
   lib=s;
   Ref=i;
   prix=f;
}

void Medicament::afficher(){
    cout << "df: " << df << " lib: " << lib << " ref: " << Ref << " prix: " << prix << endl;
}
