#include<iostream>
using namespace std;
class Pavedroit{
    private:
        double longueur,largeur,hauteur;
    public:
        double volume()const{
            return longueur*largeur*hauteur;
        }
        double getLongueur()const{
            return longueur;
        }
        double getLargeur()const{
            return largeur;
        }
        double getHauteur()const{
            return hauteur;
        }
        void setLongueur(double lgr){
            longueur=lgr;
        }
        void setLargeur(double larg){
            largeur=larg;
        }
        void setHauteur(double haut){
            hauteur=haut;
        }
};
int main(){
    Pavedroit pave1;
    pave1.setLongueur(174.56);
    pave1.setLargeur(92.824);
    pave1.setHauteur(8.34);
    cout<<"Calcul du volume d'un pave droit"<<endl;
    cout<<"longueur="<<pave1.getLongueur()<<"metres"<<endl;
    cout<<"largeur="<<pave1.getLargeur()<<"metres"<<endl;
    cout<<"hauteur="<<pave1.getHauteur()<<"metres"<<endl;
    cout<<"Le volume du pave droit donne:"<<pave1.volume()<<" metres cubes"<<endl;
}
