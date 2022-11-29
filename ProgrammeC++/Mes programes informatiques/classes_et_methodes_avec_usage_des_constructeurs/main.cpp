#include<iostream>
using namespace std;

class Tableau{
    private:
        int taille;                                //Déclaration de la taille du tableau
        int *ptr;                                  //Déclaration d'un pointeur sur le tableau
    public:
        Tableau(int t);                            //Déclaration du constructeur ayant en paramètre la taille du tableau
        void saisieDonnee();
        void afficherDonnee();
        void altererDonnee();
        void triTableau();
        int sommeElement();
        int plusPetitElement();
        int plusGrandElement();
        ~Tableau();                                //Déclaration du destructeur
};

Tableau::Tableau(int t=5){                           //Définition du constructeur avec précision des attributs
    taille=t;
    ptr=new int[taille];                           //Allocation dynamique de memoire pour les valeurs du tableau
}

void Tableau::saisieDonnee(){                      //Définition de la fonction de saisie des données
    cout<<"Veuillez entrer "<<taille<<" valeurs entieres"<<endl;
    for(int i(0);i<taille;i++){
        cout<<"Entrez la valeur "<<i+1<<":";
        cin>>*(ptr+i);
        cout<<endl;
    }
}

void Tableau::afficherDonnee(){                     //Définition de la fonction d'affichage des données
    cout<<"Voici les valeurs precedemment saisies:"<<endl;
    for(int i(0);i<taille;i++){
        cout<<*(ptr+i)<<" ";
    }
}

void Tableau::altererDonnee(){                      //Définition de la fonction de modification de valeurs
    int choix(2),position,newvalue;
    cout<<"Voulez-vous modifier une valeur?"<<endl;
    cout<<"  1-oui"<<endl<<"  2-non"<<endl;
    cout<<"Entrez votre choix:";
    cin>>choix;
    switch (choix) {
    case 1:
        cout<<"Entrez la position de la valeur:";
        cin>>position;
        while(position>taille){
            cout<<"La position de votre valeur ne peut pas depasser "<<taille<<endl;
            cout<<"Veuillez entrer une nouvelle position compris entre 1 et "<<taille<<":";
            cin>>position;
        }
        cout<<"Entrez la nouvelle valeur:";
        cin>>newvalue;
        *(ptr+(position-1))=newvalue;
        cout<<"Voici le nouveau tableau:"<<endl;
        for(int i(0);i<taille;i++){
            cout<<*(ptr+i)<<" ";
        }
        cout<<endl;
        break;
    case 2:
        cout<<"D'accord!"<<endl;
        break;
    default:
        cout<<"Soyez precis!"<<endl;
        choix=2;
        break;
    }
}

void Tableau::triTableau(){                         //Définition de la fonction de tri des données
    int x;
    for(int i=0;i<taille-1;i++){
        for(int j=i+1;j<taille;j++){
            if(*(ptr+i)>*(ptr+j)){
                x=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=x;
            }
        }
    }
    cout<<"Le tri des valeurs saisies donne:"<<endl;
    for(int i(0);i<taille;i++){
        cout<<*(ptr+i)<<" ";
    }
}

int Tableau::sommeElement(){                        //Définition de la fonction de somme des éléments
    int somme=0;
    for(int i(0);i<taille;i++){
        somme=somme+*(ptr+i);
    }
    return(somme);
}

int Tableau::plusPetitElement(){                             //Définition de la fonction du plus petit élément
    int min=*ptr;
    for(int i(1);i<taille;i++){
        if(min>*(ptr+i)){
            min=*(ptr+i);
        }
    }
    return(min);
}

int Tableau::plusGrandElement(){                             //Définition de la fonction du plus grand élément
    int max=*ptr;
    for(int i(1);i<taille;i++){
        if(max<*(ptr+i)){
            max=*(ptr+i);
        }
    }
    return(max);
}

Tableau::~Tableau(){                                        //Définition du destructeur
    delete []ptr;
}

int main(){
    Tableau board1(10);                                     //Définition d'un objet board1 qui est un tableau de taille 10
    board1.saisieDonnee();
    board1.afficherDonnee();
    cout<<endl<<endl;
    board1.altererDonnee();
    board1.triTableau();
    cout<<endl<<endl;
    cout<<"Voici la somme des elements du tableau:"<<endl;
    cout<<"Somme="<<board1.sommeElement();
    cout<<endl<<endl;
    cout<<"Le plus petit element du tableau est:"<<board1.plusPetitElement()<<endl<<endl;
    cout<<"Le plus grand element du tableau est:"<<board1.plusGrandElement()<<endl<<endl;
}
