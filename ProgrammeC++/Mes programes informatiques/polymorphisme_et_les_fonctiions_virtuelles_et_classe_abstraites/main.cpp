#include<iostream>
using namespace std;

//Classe mère déclarée
class FigureGeometrique{
    private:
        double arrete,hauteur,rayon,apotheme,longueur,largeur,cote,hauteur_triangle;
        const double pi=3.14;
    protected:
        virtual double aire()const=0;
        virtual double volume()const=0;
    public:
        FigureGeometrique(double hauteur_triangle,double arrete,double hauteur,double rayon,double apotheme,double longueur,double largeur,double cote);
        void afficherMenu()const;
};

//Définition du constructeur
FigureGeometrique::FigureGeometrique(double hauteur_triangle,double arrete,double hauteur,double rayon,double apotheme,double longueur,double largeur,double cote){
    arrete=arrete;
    hauteur=hauteur;
    rayon=rayon;
    apotheme=apotheme;
    longueur=longueur;
    largeur=largeur;
    cote=cote;
    hauteur_triangle=hauteur_triangle;
}

//Définition du fonction d'affichage régulière du menu
void FigureGeometrique::afficherMenu() const{
    int choix;
    cout<<"   Menu"<<endl;
    cout<<" 1-Un cube"<<endl<<" 2-Une pyramide"<<endl<<" 3-Une sphere"<<endl<<" 4-Un cone"<<endl;
    cout<<"Entrez votre choix:";
    cin>>choix;
    switch (choix) {
    case 1:
        cout<<"Que voulez-vous calculez?"<<endl;
        cout<<" 1-L'aire"<<endl<<" 2-volume"<<endl;
        cout<<"Entrez votre choix:";
        cin>>choix;
        switch (choix) {
        case 1:
            cout<<"Entrez l'arrete du cube:";
            cin>>arrete;
            cout<<"L'aire de la surface totale de ce cube donne:"<<ptrcube->aire()<<endl;
            break;
        case 2:
            cout<<"Entrez l'arrete du cube:";
            cin>>arrete;
            cout<<"Le volume de ce cube donne:"<<ptrcube->volume()<<endl;
            break;
        default:
            cout<<"Soyez precis!"<<endl;
            break;
        }
        break;
    case 2:
        cout<<"Que voulez-vous calculez?"<<endl;
        cout<<" 1-L'aire"<<endl<<" 2-volume"<<endl;
        cout<<"Entrez votre choix:";
        cin>>choix;
        switch (choix) {
        case 1:
            cout<<"S'il s'agit d'une pyramide à base carre,mettez la meme valeur pour la longueur et la largeur"<<endl;
            cout<<"Entrez la longueur de la base:";
            cin>>longueur;
            cout<<"Entrez la largeur de la base:";
            cin>>largeur;
            cout<<"Entrez la hauteur d'un triangle constituant la face laterale:";
            cin>>hauteur_triangle;
            cout<<"Entrez la hauteur de la pyramide:";
            cin>>hauteur;
            cout<<"L'aire de la surface totale de cette pyramide donne:"<<ptrpyramide->aire()<<endl;
            break;
        case 2:
            cout<<"S'il s'agit d'une pyramide à base carre,mettez la meme valeur pour la longueur et la largeur"<<endl;
            cout<<"Entrez la longueur de la base:";
            cin>>longueur;
            cout<<"Entrez la largeur de la base:";
            cin>>largeur;
            cout<<"Entrez la hauteur de la pyramide:";
            cin>>hauteur;
            cout<<"Le volume de cette pyramide donne:"<<ptrpyramide->volume()<<endl;
            break;
        default:
            cout<<"Soyez precis!"<<endl;
            break;
        }
        break;
    case 3:
        cout<<"Que voulez-vous calculez?"<<endl;
        cout<<" 1-L'aire"<<endl<<" 2-volume"<<endl;
        cout<<"Entrez votre choix:";
        cin>>choix;
        switch (choix) {
        case 1:
            cout<<"Entrez le rayon de la sphere:";
            cin>>rayon;
            cout<<"L'aire de la surface totale de cette sphere donne:"<<ptrsphere->aire()<<endl;
            break;
        case 2:
            cout<<"Entrez le rayon de la sphere:";
            cin>>rayon;
            cout<<"Le volume de cette sphere donne:"<<ptrsphere->volume()<<endl;
            break;
        default:
            cout<<"Soyez precis!"<<endl;
            break;
        }
        break;
    case 4:
        cout<<"Que voulez-vous calculez?"<<endl;
        cout<<" 1-L'aire"<<endl<<" 2-volume"<<endl;
        cout<<"Entrez votre choix:";
        cin>>choix;
        switch (choix) {
        case 1:
            cout<<"Entrez le rayon de la base:";
            cin>>rayon;
            cout<<"Entrez l'apotheme du cone:";
            cin>>apotheme;
            cout<<"L'aire de la surface totale de ce cone donne:"<<ptrcone->aire()<<endl;
            break;
        case 2:
            cout<<"Entrez le rayon de la base:";
            cin>>rayon;
            cout<<"Entrez l'apotheme du cone:";
            cin>>apotheme;
            cout<<"Le volume de ce cone donne:"<<ptrcone->volume()<<endl;
            break;
        default:
            cout<<"Soyez precis!"<<endl;
            break;
        }
        break;
    default:
        cout<<"Soyez precis!"<<endl;
        break;
    }
}

//Définition de la sous-classe cube
class Cube:public FigureGeometrique{
    public:
        Cube();
        double aire()const;
        double volume()const;
};
double Cube::aire(){
    return 6*arrete*arrete;
}
double Cube::volume(){
    return arrete*arrete*arrete;
}

//Définition de la sous-classe pyramide
class Pyramide:public FigureGeometrique{
    public:
        double aire()const;
        double volume()const;
};
double Pyramide::aire(){
    return (longueur*largeur)+(longueur*hauteur_triangle)+(largeur*hauteur_triangle);
}
double Pyramide::volume(){
    return longueur*largeur*hauteur;
}

//Définition de la sous-classe sphere
class Sphere:public FigureGeometrique{
    public:
        double aire()const;
        double volume()const;
};
double Sphere::aire(){
    return 5;       //A revoir
}
double Sphere::volume(){
    return (4/3)*pi*rayon*rayon*rayon;
}

//Définition de la sous-classe cone
class Cone:public FigureGeometrique{
    public:
        double aire()const;
        double volume()const;
};
double Cone::aire()const{
    return 10;          //A revoir
}
double Cone::volume()const{
    return rayon*rayon*pi*1((apotheme*apotheme)-(rayon*rayon));
}

int main(){
    Cube *ptrcube(&cube);
    Pyramide *ptrpyramide(&pyramide);
    Sphere *ptrsphere(&sphere);
    Cone *ptrcone(&cone);
    cout<<"Calcul de l'aire et du volume de quelques figures geometrique"<<endl;
    FigureGeometrique::afficherMenu();
}
