#include "Personne.h"

Personne::Personne()
{

}
Personne::Personne(int id, string nom,string prenom, string mail){
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->mail = mail;


}

int Personne::getId(){
    return id;
}
string Personne::getNom(){
    return nom;
}

Personne::~Personne()
{
    //dtor
}
