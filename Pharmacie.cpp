#include "Pharmacie.h"
#include <typeinfo>

using namespace std;

Pharmacie::Pharmacie()
{
    //ctor
}

Pharmacie::~Pharmacie()
{
    for(vector<Medicament*>::iterator it=meds.begin();it!=meds.end();it++){
        delete (*it);
    }
}


Pharmacie::Pharmacie(const Pharmacie& p){
    if(&p!=this){
        Medicament* M;
        for(vector<Medicament*>::const_iterator it=p.meds.begin();it!=p.meds.end();it++){
            if(typeid(**it)==typeid(Medicament)){
                M=new Medicament(static_cast<const Medicament&>(**it));
            }
            else if(typeid(**it)==typeid(Medicament)){
                M=new Antibiotique(static_cast<const Antibiotique&>(**it));
            }
            else if(typeid(**it)==typeid(Medicament)){
                M=new Antiflammatoire(static_cast<const Antiflammatoire&>(**it));
            }
            meds.push_back(M);
        }
    }
}


Pharmacie& Pharmacie::operator=(const Pharmacie& p){
    if(&p!=this){
        for(vector<Medicament*>::const_iterator it=meds.begin();it!=meds.end();it++){
            delete (*it);
        }
        meds.clear();
        Medicament* M;
        for(vector<Medicament*>::const_iterator it=p.meds.begin();it!=p.meds.end();it++){
            if(typeid(**it)==typeid(Medicament)){
                M=new Medicament(static_cast<const Medicament&>(**it));
            }
            else if(typeid(**it)==typeid(Medicament)){
                M=new Antibiotique(static_cast<const Antibiotique&>(**it));
            }
            else if(typeid(**it)==typeid(Medicament)){
                M=new Antiflammatoire(static_cast<const Antiflammatoire&>(**it));
            }
            meds.push_back(M);
        }
    }
    return *this;
}

vector<Medicament*>::iterator Pharmacie::recherche(int refer){
    for(vector<Medicament*>::iterator it=meds.begin();it!=meds.end();it++){
        if((*it)->getRef()==refer)
            return it;
    }
    return meds.end();
}


void Pharmacie::ajouter(Medicament& m){
    if(recherche(m.getRef())==meds.end()){
        Medicament* M=new Medicament(static_cast<const Medicament&>(m));
        meds.push_back(M);
    }
}


void Pharmacie::ajouter(Antibiotique& m){
    if(recherche(m.getRef())==meds.end()){
        Medicament* M=new Antibiotique(static_cast<const Antibiotique&>(m));
        meds.push_back(M);
    }
}


void Pharmacie::ajouter(Antiflammatoire& m){
    if(recherche(m.getRef())==meds.end()){
        Medicament* M=new Antiflammatoire(static_cast<const Antiflammatoire&>(m));
        meds.push_back(M);
    }
}

void Pharmacie::supprimer(int r){
    if(recherche(r)!=meds.end())
        meds.erase(recherche(r));
    else
        cout<<"medicament invalide!"<<endl;
}

void Pharmacie::afficher(){
    for(vector<Medicament*>::iterator it=meds.begin();it!=meds.end();it++){
        (*it)->afficher();
    }
}
