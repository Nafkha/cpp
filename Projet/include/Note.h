#ifndef NOTE_H
#define NOTE_H
#include "Matiere.h"
#include "Etudiant.h"
#include<string>

class Note
{
    public:
        Note();
        Note(Matiere mat,Etudiant etu,double note,string type);
        virtual ~Note();

    protected:
        Matiere mat;
        Etudiant etu;
        double note;
        string type;

    private:
};

#endif // NOTE_H
