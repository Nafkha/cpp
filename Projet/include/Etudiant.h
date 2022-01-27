#ifndef ETUDIANT_H
#define ETUDIANT_H
#include<string>
#include<Personne.h>
class Etudiant: public Personne
{
    public:
        Etudiant();
        Etudiant(int id,string nom,string prenom,string mail,int num_insc);
        string getNom();
        string getPrenom();
        string getMail();
        int getId();
        int getNumInsc();
        virtual ~Etudiant();
    protected:
                int num_insc;

    private:
};

#endif // ETUDIANT_H
