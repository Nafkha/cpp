#ifndef MATIERE_H
#define MATIERE_H
#include "Enseignant.h"
#include<string>
class Matiere
{
    public:
        Matiere();
        Matiere(string idMat,string nomMat,double coef,Enseignant enseignant);
        virtual ~Matiere();

    protected:
        string idMat;
        string nomMat;
        double coef;
        Enseignant enseignant;

    private:
};

#endif // MATIERE_H
