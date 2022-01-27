#include "Enseignant.h"

Enseignant::Enseignant()
{
    //ctor
}
Enseignant::Enseignant(int id,string nom,string prenom,string mail,int cnss){
        this->id = id;
        this->nom = nom;
        this->prenom = prenom;
        this->mail = mail;
        this->cnss = cnss;
}

int Enseignant::getId(){
    return id;
}
string Enseignant::getNom(){
    return nom;
}
string Enseignant::getPrenom(){
    return prenom;
}
string Enseignant::getMail(){
    return mail;
}
int Enseignant::getCnss(){
    return cnss;
}

Enseignant::~Enseignant()
{
    //dtor
}
