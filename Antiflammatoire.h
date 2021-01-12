#ifndef ANTIFLAMMATOIRE_H
#define ANTIFLAMMATOIRE_H

#include "Medicament.h"

using namespace std;

class Antiflammatoire : public Medicament
{
    public:
        Antiflammatoire();
        virtual ~Antiflammatoire();
        Antiflammatoire(Date,string,int,float,string,float);
        void afficher();

    protected:
        string molecule;
        float acidite;
};

#endif // ANTIFLAMMATOIRE_H
