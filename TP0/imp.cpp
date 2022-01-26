#include<iostream>
#include "bib.h"


void charToAscii(){
    cout<<"Exercice 1"<<endl;
    char c;
    cout<<"Donner un caractere"<<endl;
    cin>>c;
    int i=c;
    cout<<"Le caractere : "<<c<<" Son code ASCII : "<<i<<endl;

}

void electionVote(){
    cout<<"Exercice 2"<<endl;

    double i,v,p,m;
    do{
    cout<<"Donner le nombre d'inscrit"<<endl;
    cin>>i;
    }while(i<1);
    do{
            cout<<"Donner le nombre de votants"<<endl;
            cin>>v;

    }while(v>i);
    p = (v/i)*100;
    m = v/2;
    cout<<"Le pourcentage de votant est : "<<p<<"% Majorite de voix est : "<<m<<endl;

}
void moyReal(){

    double a,b,c;
    cout<<"Exercice 3"<<endl;

    cout<<"Donner a : ";
    cin>>a;
    cout<<"Donner b : ";
    cin>>b;
    cout<<"Donner c : ";
    cin>>c;
    cout<<"La moyenne est : "<<(a+b+c)/3<<endl;

}
void majMin(){
    char c;
        cout<<"Exercice 4"<<endl;

    do{
            cout<<"Donner une lettre"<<endl;
            cin>>c;

    }while((c<'A' && c>'Z') || (c<'a' && c>'z'));
    if(c<'A' && c>'Z'){
        cout<<"Erreur : La lettre '"<<c<<"' est minuscule"<<endl;
    }else{
        char x = c+32;
        cout<<"'"<<c<<"' en minuscule est '"<<x<<"'"<<endl;
    }
}
void minDixEntiers(){

    int m,x;
    cout<<"Exercice 5"<<endl;

    cout<<"Donner un entier"<<endl;
    cin>>m;
    for(int i=0;i<9;i++){
        cout<<"Donner un entier"<<endl;
        cin>>x;
        if(x<m){
            m=x;
        }
    }
    cout<<"Le plus petits de ces entiers est : "<<m<<endl;
}
void rempTabSuppVal(){
        cout<<"Exercice 6"<<endl;

    int tab[10];
    for(int i=0;i<10;i++){
        cout<<"Donner l'element tab["<<i<<"]"<<endl;
        cin>>tab[i];
    }
    cout<<"Donner un element a supprimer"<<endl;
    int x;
    cin>>x;
    if(tab[9]==x){
        tab[9]=0;
    }else{
    for(int i=0;i<10;i++){
        if(tab[i]==x){
            for(int j=i;j<9;j++){
                tab[j]=tab[j+1];
            }
            tab[9]=0;
            break;
        }
    }
    for(int i = 0;i<10;i++){
        cout<<tab[i]<<" | ";
    }
    }
}
void calculFactorielle(){
    cout<<"Exercice 7"<<endl;

    int x;
    do{
        cout<<"Donner un entier strictement positif"<<endl;
        cin>>x;
    }while(x<1);
    int i = x-1;
    int fact=x;
    do{
        fact = fact*i;
        i--;
    }while(i>1);
    cout<<"x! = "<<fact<<" Calulee avec do..while"<<endl;
     fact = x;
     i = x-1;
    while(i>1){
        fact = fact*i;
        i--;
    }
    cout<<"x! = "<<fact<<" Calulee avec while"<<endl;
    fact = x;
    for(i=x-1;i>1;i--){
        fact = fact *i;
    }
    cout<<"x! = "<<fact<<" Calulee avec for"<<endl;
}

void Max(){
    cout<<"Exercice 8"<<endl;

    cout<<"Donner un entier a : "<<endl;
    int a;
    cin>>a;
    cout<<"Donner un entier b : "<<endl;
    int b;
    cin>>b;
    if(a>b){
        cout<<a<<" est le maximum"<<endl;
    }else if(a==b){
        cout<<a<<"="<<b<<endl;
    }else{
        cout<<b<<" est le maximum"<<endl;
    }
}
void Permut(){
    cout<<"Exercice 9"<<endl;
    int a,b;
    cout<<"Donner un entier a : "<<endl;
    cin>>a;
    cout<<"Donner un entier b : "<<endl;
    cin>>b;
    cout<<"Avant permut, a = "<<a<<", b = "<<b<<endl;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"Apres permut, a = "<<a<<", b = "<<b<<endl;

}
void produitMatriceVecteur(){
    cout<<"Exercice 10"<<endl;
    int m[3][3];
    int v[3];
    cout<<"Remplir Matrice"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Donner M["<<i<<"]["<<j<<"]"<<endl;
            cin>>m[i][j];
        }
    }
    cout<<"Remplir Vecteur"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Donner v["<<i<<"]"<<endl;
        cin>>v[i];
    }

    int r[3];
    for(int i=0;i<3;i++){
        r[i]=0;
    }

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            r[i]+=m[i][j]*v[j];
        }

    }
    for(int i=0;i<3;i++){
        cout<<"|"<<r[i]<<"|"<<endl;
    }
}



