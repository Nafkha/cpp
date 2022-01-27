#include "Etudiant.h"

Etudiant::Etudiant()
{
    //ctor
}
Etudiant::Etudiant(int id,string nom,string prenom, string mail, int num_insc){
    this->id = id;
    this->prenom = prenom;
    this->nom = nom;
    this->mail = mail;
    this->num_insc=num_insc;
}
int Etudiant::getNumInsc(){
    return num_insc;
}
string Etudiant::getNom(){
    return nom;
}
int Etudiant::getId(){
    return id;
}
Etudiant::~Etudiant()
{
    //dtor
}
