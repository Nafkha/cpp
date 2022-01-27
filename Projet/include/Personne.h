#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
using namespace std;
class Personne
{
    public:
        Personne();
        Personne(int id,string nom,string prenom,string mail);
        int getId();
        string getNom();
        virtual ~Personne();

    protected:
                int id;
        string nom;
        string prenom;
        string mail;

    private:

};

#endif // PERSONNE_H
