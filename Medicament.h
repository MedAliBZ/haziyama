#ifndef MEDICAMENT_H
#define MEDICAMENT_H

#include "Date.h"
#include <string>


using namespace std;

class Medicament
{
    public:
        Medicament();
        virtual ~Medicament();
        Medicament(Date,string,int,float);
        virtual void afficher();
        int getRef(){return Ref;}

    protected:
        Date df;
        string lib;
        int Ref;
        float prix;


};

#endif // MEDICAMENT_H
