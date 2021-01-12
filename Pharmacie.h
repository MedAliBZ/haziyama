#ifndef PHARMACIE_H
#define PHARMACIE_H


#include "Antibiotique.h"
#include "Antiflammatoire.h"
#include <vector>

using namespace std;

class Pharmacie
{
    public:
        Pharmacie();
        virtual ~Pharmacie();
        Pharmacie(const Pharmacie&);
        Pharmacie& operator=(const Pharmacie&);
        vector<Medicament*>::iterator recherche(int);
        void ajouter(Medicament&);
        void ajouter(Antibiotique&);
        void ajouter(Antiflammatoire&);
        void supprimer(int);
        void afficher();

    protected:
        vector<Medicament*> meds;
};

#endif // PHARMACIE_H
