#include "Groupe.h"

Groupe::Groupe()
{
    //ctor
}
Groupe::Groupe(string idGRP,string niveau,string diplome,string specialite,int num_G){
    this->idGRP = idGRP;
    this->niveau = niveau;
    this->diplome = diplome;
    this->specialite = specialite;
    this->num_G = num_G;
}

Groupe::~Groupe()
{
    //dtor
}
