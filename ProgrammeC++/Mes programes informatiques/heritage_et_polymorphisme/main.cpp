#include<iostream>
#include<cmath>
using namespace std;

//Définition de la super-classe
class FormeGeometrique{
    protected:
        virtual double aire()=0;
        virtual double volume()=0;
    public:
        void afficher();               //Cette fonction est déclarée pour générer de façon unique l'affichage des résultats
};

void FormeGeometrique::afficher(){
    cout<<"L'aire de la surface de cette figure donne:"<<aire()<<"m²"<<endl;
    cout<<"Le volume de cette figure donne:"<<volume()<<"m³"<<endl;
}

//Définition de la sous-classe Cube
class Cube:public FormeGeometrique{
    private:
        double arrete;
    public:
        Cube(double arrete):arrete(arrete){}
        double aire(){return 6*pow(arrete,2);}
        double volume(){return pow(arrete,3);}
};

//Définition de la sous-classe Pyramide
class Pyramide:public FormeGeometrique{
    private:
        double longueur,largeur,hauteur,hauteur_triangle;
    public:
        Pyramide(double lng,double lrg,double htr,double htr_tri):longueur(lng),largeur(lrg),hauteur(htr),hauteur_triangle(htr_tri){}
        double aire(){return longueur*largeur+longueur*hauteur_triangle+largeur*hauteur_triangle;}
        double volume(){return longueur*largeur*hauteur;}
};

//Définition de la sous-classe Sphère
class Sphere:public FormeGeometrique{
    private:
        double rayon;
        double const pi=3.14;
    public:
        Sphere(double rayon):rayon(rayon){}
        double volume(){return (4/3)*pi*pow(rayon,3);}
        double aire(){return 0;}
        void affichersphere(){cout<<"Le volume de cette figure donne:"<<volume()<<"m³"<<endl;}
};

//Définition de la sous-classe Cône
class Cone:public FormeGeometrique{
    private:
        double rayon,apotheme;
        double const pi=3.14;
    public:
        Cone(double ray,double apo):rayon(ray),apotheme(apo){}
        double aire(){return pi*rayon*apotheme;}
        double volume(){return pi*pow(rayon,2)*(pow(apotheme,2)-pow(rayon,2));}
};


int main(){
    cout<<"CUBE"<<endl;
    Cube cube1(8.214);
    Cube *ptrcube(&cube1);
    ptrcube->afficher();
    cout<<endl;

    cout<<"PYRAMIDE"<<endl;
    Pyramide pyramide1(14.54,9.12,18.745,20.5);
    Pyramide *ptrpyramide(&pyramide1);
    ptrpyramide->afficher();
    cout<<endl;

    cout<<"SPHERE"<<endl;
    Sphere sphere1(9.457);
    Sphere *ptrsphere(&sphere1);
    ptrsphere->affichersphere();
    cout<<endl;

    cout<<"CÔNE"<<endl;
    Cone cone1(6.5,8.66);
    Cone *ptrcone(&cone1);
    ptrcone->afficher();
    cout<<endl;
}
