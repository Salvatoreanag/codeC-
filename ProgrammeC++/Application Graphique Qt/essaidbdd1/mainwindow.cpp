#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QtWidgets>
#include <QSqlTableModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //***********On teste la connexion à la connexion à la bdd puis on afiche les tables grâce aux modèles***********
    if(connexionBaseDeDonnee()){
        QSqlTableModel *modelePersonne=new QSqlTableModel;
        modelePersonne->setTable("personne");
        modelePersonne->setEditStrategy(QSqlTableModel::OnRowChange);
        modelePersonne->select();
        modelePersonne->setHeaderData(0,Qt::Horizontal,tr("Noms"));
        modelePersonne->setHeaderData(1,Qt::Horizontal,tr("Prénoms"));
        modelePersonne->setHeaderData(2,Qt::Horizontal,tr("Naissance"));
        QTableView *vuePersonne=new QTableView;
        vuePersonne->hideColumn(0);
        ui->vuePersonne->setModel(modelePersonne);
    }
    //***********Fin d'affichage des tables***********

}


//*****************On definit ici la connaxion à la bdd************
bool MainWindow::connexionBaseDeDonnee(){
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setConnectOptions("/media/salvatore/01D75A62830D49E0/Programme C++/AppBDD/test");
    if(db.open()){
        qDebug()<<"Connexion réussie!"<<endl;
    }
    else{
        qDebug()<<"Connexion impossible!"<<endl;
    }
    return db.open();
}
//*****************fin de connexion à la bdd***********************


MainWindow::~MainWindow()
{
    delete ui;
}

