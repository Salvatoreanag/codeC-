#ifndef BDDCONNECT_H
#define BDDCONNECT_H
#include <QSqlDatabase>
#include <QDebug>


static bool connexionBaseDeDonnee(){
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/media/salvatore/01D75A62830D49E0/Programme C++/AppBDD/gestion_notes_eleve.sqlite");
    if(db.open()){
        qDebug()<<"Connexion réussie!"/*<<endl*/;
        //ui->statusBar->showMessage("Connexion à la base de donnée réussie!");
    }
    else{
        qDebug()<<"Connexion impossible!"/*<<endl*/;
        //ui->statusBar->showMessage("Impossible de se connecter à la base de donnée!");
    }
    return db.open();
}


#endif // BDDCONNECT_H
