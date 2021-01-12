#ifndef ANTIBIOTIQUE_H
#define ANTIBIOTIQUE_H

#include "Medicament.h"

using namespace std;

class Antibiotique : public Medicament
{
    public:
        Antibiotique();
        virtual ~Antibiotique();
        Antibiotique(Date,string,int,float,string);
        void afficher();

    protected:
        string bacterie;
};

#endif // ANTIBIOTIQUE_H
