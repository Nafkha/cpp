#ifndef GROUPEMODULE_H
#define GROUPEMODULE_H
#include "Matiere.h"
#include<string>

class GroupeModule
{
    public:
        GroupeModule();
        GroupeModule(string idGM,string nomGM,double coefGM,vector<Matiere> listMatiere);
        virtual ~GroupeModule();

    protected:
        string idGM;
        string nomGM;
        double coefGM;
        vector<Matiere> listMatiere;

    private:
};

#endif // GROUPEMODULE_H
