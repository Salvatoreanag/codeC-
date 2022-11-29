#include <iostream>
#include <QTSql>

int main(int argc, char *argv[])
{
    QSqlDatabase bd=QSqlDatabase::addDatabase("SQLite"); //Déclaration de la bdd
    db.setDatabaseName("");

}


/*#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
*/
