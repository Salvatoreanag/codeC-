#include<iostream>
using namespace std;

class Habitation{
    protected:
        string proprietaire;
        string adresse;
        double surface;
    public:
        Habitation(string proprietaire,string adresse,double surface):proprietaire(proprietaire),adresse(adresse),surface(surface){}
        virtual double impot()=0;
        void affiche(){cout<<proprietaire<<" habite a "<<adresse<<" sur une surface de "<<surface<<" mettres carres."<<endl;}
};

class HabitationIndividuelle:public Habitation{
    private:
        int nbPieces;
        bool piscine;
    public:
        HabitationIndividuelle(string proprietaire,string adresse,double surface,int nbPieces,bool piscine):Habitation(proprietaire,adresse,surface),nbPieces(nbPieces),piscine(piscine){}
        double impot(){
            if(piscine==true){return (200*surface)+(10000*nbPieces)+50000;}
            else{return 200*surface+10000*nbPieces;}
        }
        void affiche(){
            Habitation::affiche();
            if(piscine==true){cout<<"Il possede "<<nbPieces<<" pieces et une piscine."<<endl;}
            else{cout<<"Il possede "<<nbPieces<<" pieces."<<endl;}
        }
};

class HabitationProfessionelle:public Habitation{
    private:
        int nbEmployes;
    public:
        HabitationProfessionelle(string proprietaire,string adresse,double surface,int nbEmployes):Habitation(proprietaire,adresse,surface),nbEmployes(nbEmployes){}
        double impot(){return (200*surface)+(100000*(nbEmployes/10));}
        void affiche(){
            Habitation::affiche();
            cout<<"Le nombre d'employes qui travaillent dans l'Entreprise est:"<<nbEmployes<<endl;
        }
};

int main(){
    HabitationIndividuelle habInd1("AGBAGUINOU","Porto-Novo",155.58,54,true);
    HabitationIndividuelle *ptrhabInd1(&habInd1);
    habInd1.HabitationIndividuelle::affiche();
    cout<<"Il doit une somme d'impot de "<<ptrhabInd1->impot()<<" francs cfa"<<endl<<endl;

    HabitationProfessionelle habPro1("ABOKILA","Ouidah",213.75,96);
    HabitationProfessionelle *ptrhabPro1(&habPro1);
    habPro1.HabitationProfessionelle::affiche();
    cout<<"Il doit une somme d'impot de "<<ptrhabPro1->impot()<<" francs cfa"<<endl<<endl;
}
