#include "GroupeModule.h"

GroupeModule::GroupeModule()
{
    //ctor
}
GroupeModule::GroupeModule(string idGM,string nomGM,double coefGM){
    this->idGM = idGM;
    this->nomGM = nomGM;
    this->coefGM = coefGM;
}

GroupeModule::~GroupeModule()
{
    //dtor
}
