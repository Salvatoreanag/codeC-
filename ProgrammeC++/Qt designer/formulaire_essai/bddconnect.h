#ifndef BDDCONNECT_H
#define BDDCONNECT_H

#include "QSqlDatabase"

static bool connexion(){
    QSqlDatabase db=QSqlDatabase::addDatabase("SQLite"); //déclaration de la base de donnée
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setDatabaseName("form");
    db.setPassword("");

    if(db.open()){
        return true;
    }
    else{
        return false;
    }

}

#endif // BDDCONNECT_H
