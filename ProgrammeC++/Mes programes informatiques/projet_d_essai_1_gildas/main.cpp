/**
 * @file EmployeApp.cpp
 * @author evrajodygildas (evrajodygildas@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-11
 * @copyright Copyright (c) 2022
 */

#include<iostream>
#include<string.h>
using namespace std;


/**
 * @brief Employe est une classe abstraite
 * Donc elle contient une fonction virtuelle
 */

class Employe {

    protected:
        string nom , prenom;

    public:
        virtual float gain() = 0; // Fonction virtuelle pure
        Employe(string name, string surname): nom(name),prenom(surname){}
        Employe();

        // Getteur pour le nom
        string getEmployeNom() {
            return this->nom;
        }

        // Getteur pour le prenom
         string getEmployePrenom() {
            return this->prenom;
        }

       // Setteur pour le nom
        void setEmployePrenom(string surname) {
            this->prenom = surname;
        }

      // Setteur pour le prenom
        void setEmployeNom(string name) {
            this->nom = name;
        }
        // ~Employe();
};

/**
 * @brief La classe Patron herite de Employe
 */

class Patron : public Employe
{
    private:
        float salaire;
    public:
        Patron();
        Patron(string nom, string prenom, float salaire ) : Employe(nom, prenom) , salaire(salaire){ }

        // Semblable au getteur
        virtual float gain() {
            return this->salaire;
        }

        void setPatronSalaire(float money){
            this->salaire = money;
        }

        // ~Patron();
};


class TravailleurHoraire : public Employe {
    private:
        double heure, retribution;
    public:
        TravailleurHoraire();
        TravailleurHoraire(string nom, string prenom, double retribution) : Employe(nom, prenom), retribution(retribution) {}

        // Salaire vaut retribution * heure de travaille
        // On convertit en reel (float)
        virtual float gain() {
            return (float) this->retribution * this->heure;
        }

         void setTravailleurHeure(float time){
            this->heure = time;
        }

        double getTravailleurHeure(){
            return this->heure ;
        }

        void setRetribution(double retri) {
            this->retribution = retri;
        }

        double getRetribution(){
            return this->retribution ;
        }

        // ~TravailleurHoraire();
};




int main() {


    Patron un_chef = Patron("SODJI", "Bernador", 2500);
    TravailleurHoraire un_fonc = TravailleurHoraire("ABOKI", "Fernando", 2500);
    un_fonc.setTravailleurHeure(150.2);

    cout << "Le chef " << un_chef.getEmployeNom() + " " + un_chef.getEmployePrenom() + " gagne " << un_chef.gain() << " FCFA/Mois" << endl;
    cout << "Le Travailleur " << un_fonc.getEmployeNom() + " " + un_fonc.getEmployePrenom() + " gagne " << un_fonc.gain() << " FCFA/Mois"  << endl;

    un_chef.setPatronSalaire(45000) ;
    cout << "Le chef " << un_chef.getEmployeNom() + " " + un_chef.getEmployePrenom() + " est promu pour " << un_chef.gain() << " FCFA/Mois" << endl;


    return 0;
}
