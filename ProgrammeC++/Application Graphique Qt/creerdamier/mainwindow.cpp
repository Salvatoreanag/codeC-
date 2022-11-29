#include "mainwindow.h"
#include "ui_mainwindow.h" // ce fichier est nécessaire pour le fonctionnement des fenêtres
#include <QtWidgets>  // Cette classe sera utilisée pour afficher les contenus personnalisés(les widgets)


MainWindow::MainWindow(QWidget *parent) // Ce code permet la construction manuelle des fenêtres.On gérera ici les signaux et les slots
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVector<QPushButton*> mesBoutons(100); //QVector<T> est l'une des classes de conteneurs génériques de Qt(Comme les tableaux en c++). Ici on crée un vecteur de 100 bouttons
    QSignalMapper *signalMapper=new QSignalMapper(this); //La classe QSignalMapper permet d'établir un lien entre un ensemble de signal sans paramètre et un slot et un slot ayant un seul paramètre.ON l'instancie donc pour pouvoir utiliser un signalMapper qui effectuera ce travail
    QObject::connect(signalMapper,SIGNAL(mapped(int)),this,SLOT(boutonclic(int))); //signalMapper permet la connexion vers un slot possédant un paramètre qui sera notre bouton.Lorsqu'il génère un évènement "mapped" il le redirige vers la procédure "boutonclic"
    for(int i=0;i<100;i++){
        mesBoutons[i]=new QPushButton("",this); //On loue dynamiquement un espace mémoire pour le bouton-poussoir courant
        mesBoutons[i]->setMinimumWidth(40); // On définit la taille minimale de la largeur à 40 pixels
        mesBoutons[i]->setMinimumHeight(40); // On définit la taille minimale de la hauteur à 40 pixels
        signalMapper->setMapping(mesBoutons[i],i); // À chaque itération on rajoute un nouvel élément à siganlMapper constitué du bouton et de son numéro
        QObject::connect(mesBoutons[i],SIGNAL(clicked()),signalMapper,SLOT(map())); //Connexion entre les bouttons et signalMapper.Lorsqu'un boutton est cliqué signalMapper génère une action mapped
    }
    for(int i=0;i<100;i++){
        ui->gridLayout->addWidget(mesBoutons.at(i),i/10,i%10); // On place les bouttons dans le layout(GridLayout) de la fenêtre(ui) grâce à la méthode addWidget()
                                     // addWidget prend en paramètre (dans le cas où il est associé à un gridLayout) le widget à placer,la ligne de placement et la colone de placement
                                     // at() permet unne lecture des éléments du vecteur
    }
}  // Fin du code de la construction manuelle des fenêtres


void MainWindow::boutonclic(int num){
    QString texte;
    texte="Touche "+QString::number(num+1)+" appuyée";
    QMessageBox::information(this,"information",texte);
}


MainWindow::~MainWindow()  // Ici on détruit la fenêtre
{
    delete ui;
}  // Fin de destruction de la fenêtre

