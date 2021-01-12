#include <iostream>
#include "Date.h"
#include "Pharmacie.h"

using namespace std;

int main()
{
    Date d(1,5,2000);
    Date d1(1,5,2000);
    Date d2(1,5,2001);
    Pharmacie p;

    Medicament M(d,"med1",1,5.6);
    Antibiotique A(d1,"anti",2,39.2,"test");
    Antiflammatoire f(d2,"flam",3,84.2,"test1",412.1);
    Medicament M1(d,"tgh",3,8.1);

    p.ajouter(M);
    p.ajouter(f);
    p.ajouter(A);
    p.ajouter(M1);
    p.afficher();
    p.supprimer(3);
    p.afficher();

    return 0;
}
