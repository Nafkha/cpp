#include "Matiere.h"

Matiere::Matiere()
{
    //ctor
}
Matiere::Matiere(string idMat,string nomMat,double coef,Enseignant enseignant){

    this->idMat = idMat;
    this->nomMat = nomMat;
    this->coef = coef;
    this->enseignant = enseignant;

}

Matiere::~Matiere()
{
    //dtor
}
