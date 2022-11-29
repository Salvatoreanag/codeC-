#include<iostream>
using namespace std;

class Employe{
    private:
        string nom,prenom;
    public:
        Employe();
        Employe(string nom,string prenom):nom(nom),prenom(prenom){}
        virtual double gain()=0;                                     //Fonction virtuelle pure
        string getEmployenom(){return nom;}
        string getEmployeprenom(){return prenom;}
        void setEmployenom(string name){nom=name;}
        void setEmployeprenom(string surname){prenom=surname;}
};

class Patron:public Employe{
    private:
        double salaire;
    public:
        Patron();
        Patron(string nom,string prenom,double salaire):Employe(nom,prenom),salaire(salaire){}
        double getPatron(){return salaire;}
        void setPatron(double money){salaire=money;}
        double gain(){return salaire;}
};

class TravailleurHoraire:public Employe{
    private:
        double heure,retribution;
    public:
        TravailleurHoraire();
        TravailleurHoraire(string nom,string prenom,double heure,double retribution):Employe(nom,prenom),heure(heure),retribution(retribution){}
        double getTravailleurHoraireheure(){return heure;}
        double getTravailleurHoraireretribution(){return retribution;}
        void setTravailleurHoraireheure(double duree){heure=duree;}
        void setTravailleurHoraireretribution(double montant){retribution=montant;}
        double gain(){return heure*retribution;}
};

int main(){
    Patron patron1("ABOKI","Jonathan",125400);
    Patron *ptrpatron(&patron1);              //Un pointeur 'ptrpatron' de type patron initialisé à l'adresse de l'objet patron1
    patron1.setEmployenom("AZAGONI");
    patron1.setEmployeprenom("Rigobert");
    patron1.setPatron(254620);
    cout<<"Le patron "<<patron1.getEmployenom()<<" "<<patron1.getEmployeprenom()<<" gagne "<<ptrpatron->gain()<<" fcfa/mois"<<endl;

    TravailleurHoraire honoraire("CAKPOVI","Didero",125,1750);
    TravailleurHoraire *ptrhonoraire(&honoraire);    //Un pointeur 'ptrhonoraire' de type TravailleurHoraire initialisé à l'adresse de l'objet honoraire
    honoraire.setEmployenom("BIGODANON");
    honoraire.setEmployeprenom("Ronaldinho");
    honoraire.setTravailleurHoraireheure(156);
    honoraire.setTravailleurHoraireretribution(1800);
    cout<<"L'honoraire "<<honoraire.getEmployenom()<<" "<<honoraire.getEmployeprenom()<<" a un revenu mensuel de "<<ptrhonoraire->gain()<<" fcfa"<<endl;
}

/* Toutes fonctions que vous verrez dans les classes et qui commencent par get....  et est l'accesseur de
   l'attribut concerné et celles qui commencent par set.... est le mutateur de l'attribut concerné.
   Vous n'êtes pas obligé de prendre les mêmes noms et prénoms que moi.
   D'ailleurs à l'examen,est-ce que c'est permis d'utiliser un nom sur sa copie ???? Je me le demande??
   Puisse que cela peut être considéré comme un signe pour indiquer la provenace de sa copie. */




