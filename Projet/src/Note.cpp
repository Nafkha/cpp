#include "Note.h"

Note::Note()
{
    //ctor
}

Note::Note(Matiere mat,Etudiant etu,double note,string type){
    this->mat = mat;
    this->etu = etu;
    this->note = note;
    this->type = type;
}

Note::~Note()
{
    //dtor
}
