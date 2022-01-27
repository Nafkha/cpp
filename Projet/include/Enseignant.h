#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personne.h"
#include <string>

class Enseignant:public Personne
{
    public:
        Enseignant();
        Enseignant(int id,string nom,string prenom,string mail,int cnss);
        string getNom();
        string getPrenom();
        string getMail();
        int getId();
        int getCnss();
        virtual ~Enseignant();

    protected:
        int cnss;


    private:
};

#endif // ENSEIGNANT_H
