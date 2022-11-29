#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QtWidgets>
#include <QObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //***********On teste la connexion à la connexion à la bdd puis on afiche les tables grâce aux modèles***********
    if(connexionBaseDeDonnee()){
        modelePersonne=new QSqlTableModel;   //Cette classe permet une vue en lecture et écriture
        modelePersonne->setTable("personne");
        modelePersonne->setEditStrategy(QSqlTableModel::OnRowChange);  // On spécifie ici la stratégie d'édition. OnRowChange pour dire que la modification s'applique à la bdd automatiquement qu'on change de ligne
        modelePersonne->select();                                       // select() <=> SELECT * FROM personne
        modelePersonne->setHeaderData(0,Qt::Horizontal,tr("Identifiant"));
        modelePersonne->setHeaderData(1,Qt::Horizontal,tr("Noms"));
        modelePersonne->setHeaderData(2,Qt::Horizontal,tr("Prénoms"));
        modelePersonne->setHeaderData(3,Qt::Horizontal,tr("Naissance"));
        ui->vuePersonne->setModel(modelePersonne);

        modeleTelephone=new QSqlTableModel;
        modeleTelephone->setTable("telephone");
        modeleTelephone->select();
        modeleTelephone->setHeaderData(0,Qt::Horizontal,tr("Identifiant"));
        modeleTelephone->setHeaderData(1,Qt::Horizontal,tr("Type"));
        modeleTelephone->setHeaderData(2,Qt::Horizontal,tr("Numéro"));
        modeleTelephone->setHeaderData(3,Qt::Horizontal,tr("IDpersonne"));
        ui->vueTelephone->setModel(modeleTelephone);

        //QObject::connect(vuePersonne.selectionModel(),SIGNAL(currentChanged(const QModelIndex &,const QModelIndex &)),this,SLOT(voirNumero(const QModelIndex &))); //Lorsqu'on sélectionne une personne ses numéros seront affichés automatiquement sur le 2e qtableview. currentChanged est un signal qui est émis lorsque l'index qu'il prend en paramètre change
        //QObject::connect(modelePersonne,SIGNAL(dataChanged(const QModelIndex &,const QModelIndex &)),this,SLOT(voirNumero(const QModelIndex &)));  // Lorsque l'utilisateur saisie une valeur particulière,elle sera automatiquement pris en charge par la barre d'état et les deux zones d'éditions

    }
    //***********Fin d'affichage des tables***********

    /* Ce code permet l'affichage des tableaux uniquement en mode lecture

    ********On teste la connexion à la bdd puis on affiche les tables en utilisant les modèles*******
    if(connexionBaseDeDonnee()){

        QSqlQueryModel *modelePersonne=new QSqlQueryModel();  //Modèle d'affichage de la table personne
        modelePersonne->setQuery("SELECT nom,prenom,naissance FROM personne");
        modelePersonne->setHeaderData(0,Qt::Horizontal,tr("Noms"));   //setHeaderData() permet d'afficher les nomms des champs
        modelePersonne->setHeaderData(1,Qt::Horizontal,tr("Prenoms"));
        modelePersonne->setHeaderData(2,Qt::Horizontal,tr("Naissance"));
        QTableView vuePersonne;
        ui->vuePersonne->setModel(modelePersonne);

        QSqlQueryModel *modeleTelephone=new QSqlQueryModel();
        modeleTelephone->setQuery("SELECT type,numero FROM telephone");
        modeleTelephone->setHeaderData(0,Qt::Horizontal,tr("Type"));
        modeleTelephone->setHeaderData(1,Qt::Horizontal,tr("Numéro"));
        QTableView vueTelephone;
        ui->vueTelephone->setModel(modeleTelephone);


    }
   **************************Fin d'affichage des tables*********************************************
    */
}



//***************Connexion à la base de donnée***********************
bool MainWindow::connexionBaseDeDonnee(){
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/media/salvatore/01D75A62830D49E0/Programme C++/AppBDD/test.sqlite");
    if(db.open()){
        qDebug()<<"Connexion réussie!"<<endl;
    }
    else{
        qDebug()<<"Connexion imposible!"<<endl;
    }
    return db.open();
}
//***************Fin connexion à la base de donnée*******************


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addperson_clicked()
{
    modelePersonne->insertRow(modelePersonne->rowCount());
}

/*
void MainWindow::on_deletepersonn_clicked()
{
    int enregistrement=vuePersonne->currentIndex().row();
    modelePersonne->removeRow(enregistrement);
    vuePersonne->selectRow(0);
}


void MainWindow::on_addtel_clicked()
{
    modeleTelephone->insertRow(modeleTelephone->rowCount());
}
*/
