#include<iostream>
using namespace std;
class Rectangle{
    private:
        double longueur;
        double largeur;
    public:
        double surface() const {
            return longueur*largeur;
        }
        double getLongueur()const{       //méthoe accesseur
            return longueur;
        }
        double getLargeur()const{
            return largeur;
        }
        void setLongueur(double lgr){    //méthode manipulateur
            longueur=lgr;
        }
        void setLargeur(double larg){
            largeur=larg;
        }
};
int main(){
    Rectangle rect1;
    rect1.setLongueur(17.75);
    rect1.setLargeur(12.856);
    cout<<"Calcul de surface d'un rectangle"<<endl;
    cout<<"longueur="<<rect1.getLongueur()<<" metres"<<endl;
    cout<<"largeur="<<rect1.getLargeur()<<" metres"<<endl;
    cout<<"La surface du rectangle est: "<<rect1.surface()<<" metres carres"<<endl;

}
