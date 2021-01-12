#include "Antibiotique.h"

Antibiotique::Antibiotique()
{
    //ctor
}

Antibiotique::~Antibiotique()
{
    //dtor
}


Antibiotique::Antibiotique(Date d,string s,int i,float f,string b):Medicament(d,s,i,f){
    bacterie=b;
}

void Antibiotique::afficher(){
    Medicament::afficher();
    cout << "Bacterie: " << bacterie << endl;
}
