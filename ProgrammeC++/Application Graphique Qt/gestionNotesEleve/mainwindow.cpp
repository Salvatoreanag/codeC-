#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QLineEdit>
#include <QSqlQuery>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connexionBaseDeDonnee();


}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_enregisterEleve_clicked()
{
    //******** Réccupération des données *******
    QString mat=ui->matricule->text();
    QString name=ui->nom->text();
    QString surname=ui->prenom->text();
    QString sex=ui->sexe->currentText();
    QDate date=ui->dateNaissance->date();
    QString adress=ui->adresse->text();
    QString statut=ui->statut->currentText();
    QString numero=ui->contact->text();
    //QMessageBox::information(this,"information",mat+name+surname+sex+adress+statut+numero);
    //******** Fin réccupération des données *****
    if(!insererEleve(mat,name,surname,sex,date,adress,statut,numero)){
        QMessageBox::information(this,"Information","L'élève "+name+" "+surname+" est bien enrégistrer!");
    }
    else{
        QMessageBox::critical(this,"Erreure critique","Le formulaire n'est pas renseigné");
    }


}


bool MainWindow::insererEleve(QString mat,QString name,QString surname,QString sex,QDate date,QString adress,QString statut,QString numero){
    QSqlQuery query1;
    query1.prepare("INSERT INTO eleve(matricule,nom,prenom,sexe,dateNaissance,adresse,statut,contact) VALUES(?,?,?,?,?,?,?,?)");
    query1.addBindValue(mat);
    query1.addBindValue(name);
    query1.addBindValue(surname);
    query1.addBindValue(sex);
    query1.addBindValue(date);
    query1.addBindValue(adress);
    query1.addBindValue(statut);
    query1.addBindValue(numero);
    if(query1.exec()){
        qDebug()<<"requête exécutée"/*<<endl*/;
    }
    else{
        qDebug()<<"requête non exécutée"/*<<endl*/;
    }
    return query1.exec();
}


//********* Afficher la table des matières grâce aux modèles **********
void MainWindow::on_afficherMatiere_clicked()
{
    modeleMatiere=new QSqlQueryModel;
    modeleMatiere->setQuery("SELECT * FROM matiere");
    modeleMatiere->setHeaderData(0,Qt::Horizontal,tr("Code Matière"));
    modeleMatiere->setHeaderData(1,Qt::Horizontal,tr("Intitulé"));
    modeleMatiere->setHeaderData(2,Qt::Horizontal,tr("Coefficient"));
    tableView3=new QTableView;
    ui->tableView3->setModel(modeleMatiere);
}
//********* Fin d'affichage des matières ***********************


//********* Afficher la table des compositions***************
void MainWindow::on_afficherTableCompo_clicked()
{
    modeleCompo=new QSqlTableModel;
    modeleCompo->setTable("composition");
    modeleCompo->setEditStrategy(QSqlTableModel::OnRowChange);
    modeleCompo->select();
    modeleCompo->setHeaderData(1,Qt::Horizontal,tr("Matricule"));
    modeleCompo->setHeaderData(2,Qt::Horizontal,tr("Semestre"));
    modeleCompo->setHeaderData(3,Qt::Horizontal,tr("Code Matière"));
    modeleCompo->setHeaderData(4,Qt::Horizontal,tr("1ère Interro"));
    modeleCompo->setHeaderData(5,Qt::Horizontal,tr("2ème Interro"));
    modeleCompo->setHeaderData(6,Qt::Horizontal,tr("3ème Interro"));
    modeleCompo->setHeaderData(7,Qt::Horizontal,tr("1er Devoir"));
    modeleCompo->setHeaderData(8,Qt::Horizontal,tr("2e Devoir"));
    tableView=new QTableView;
    ui->tableView->setModel(modeleCompo);
    ui->tableView->hideColumn(0); //Ne pas afficher le champ idCompo
}
//********** Fin d'affichage de la table de compositions*************

//********** Ajouter une ligne de composition *******************
void MainWindow::on_ajouterLigneCompo_clicked()
{
    //int ligneInterro=modeleCompo->rowCount();
    //modeleCompo->insertRow(ligneInterro);
    QString mat, idSemestre, codeMatiere, interro1, interro2, interro3, devoir1, devoir2;
    ajouterLigneCompo(mat, idSemestre, codeMatiere, interro1, interro2, interro3, devoir1, devoir2);
}
//********** Fin d'ajout une ligne de composition *******************



void MainWindow::on_supprimerLigneCompo_clicked()
{
    int indexLigneInterro=modeleCompo->rowCount();
    modeleCompo->removeRow(indexLigneInterro);

}


//********** Afficher la liste des élèves********************
void MainWindow::on_afficherListeEleve_clicked()
{
    modeleEleve=new QSqlTableModel;
    modeleEleve->setTable("eleve");
    modeleEleve->setEditStrategy(QSqlTableModel::OnRowChange);
    modeleEleve->select();
    modeleEleve->setHeaderData(0,Qt::Horizontal,tr("Matricule"));
    modeleEleve->setHeaderData(1,Qt::Horizontal,tr("Noms"));
    modeleEleve->setHeaderData(2,Qt::Horizontal,tr("Prénoms"));
    modeleEleve->setHeaderData(3,Qt::Horizontal,tr("Sexe"));
    modeleEleve->setHeaderData(4,Qt::Horizontal,tr("Date de naissance"));
    modeleEleve->setHeaderData(5,Qt::Horizontal,tr("Adresse"));
    modeleEleve->setHeaderData(6,Qt::Horizontal,tr("Statut"));
    modeleEleve->setHeaderData(7,Qt::Horizontal,tr("Contact"));
    tableView3=new QTableView;
    ui->tableView3->setModel(modeleEleve);
}
//*********** Fin d'affichage de la liste des élèves*********


void MainWindow::ajouterLigneCompo(QString mat,QString idSemestre,QString codeMatiere,QString interro1,QString interro2,QString interro3,QString devoir1,QString devoir2){
    int ligne=modeleCompo->rowCount();
    modeleCompo->insertRow(ligne);
    modeleCompo->setData(modeleCompo->index(ligne,1),mat);
    modeleCompo->setData(modeleCompo->index(ligne,2),idSemestre);
    modeleCompo->setData(modeleCompo->index(ligne,3),codeMatiere);
    modeleCompo->setData(modeleCompo->index(ligne,4),interro1);
    modeleCompo->setData(modeleCompo->index(ligne,5),interro2);
    modeleCompo->setData(modeleCompo->index(ligne,6),interro3);
    modeleCompo->setData(modeleCompo->index(ligne,7),devoir1);
    modeleCompo->setData(modeleCompo->index(ligne,8),devoir2);
    modeleCompo->submitAll();
}


