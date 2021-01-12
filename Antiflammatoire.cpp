#include "Antiflammatoire.h"

Antiflammatoire::Antiflammatoire()
{
    //ctor
}

Antiflammatoire::~Antiflammatoire()
{
    //dtor
}


Antiflammatoire::Antiflammatoire(Date d,string s,int i,float f,string m,float a):Medicament(d,s,i,f){
    molecule=m;
    acidite=a;
}

void Antiflammatoire::afficher(){
    Medicament::afficher();
    cout << "Molecule: " << molecule << " acidite: " << acidite << endl;
}
