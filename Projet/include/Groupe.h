#ifndef GROUPE_H
#define GROUPE_H
#include "GroupeModule.h"
#include "Etudiant.h"
#include<string>

class Groupe
{
    public:
        Groupe();
        Groupe(string idGRP,string niveau,string diplome,string specialite,int num_G);
        virtual ~Groupe();

    protected:
        string idGRP;
        string niveau;
        string diplome;
        string specialite;
        int num_G;
        vector<GroupeModule> listeModule;
        vector<Etudiant> listeEtudiants;




    private:
};

#endif // GROUPE_H
