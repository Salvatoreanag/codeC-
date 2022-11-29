#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <bddConnect.h>
#include <QtWidgets/QMessageBox>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    bool insererEleve(QString mat,QString name,QString surname,QString sex,QDate date,QString adress,QString statut,QString numero);
    void ajouterLigneCompo(QString mat,QString idSemestre,QString codeMatiere,QString interro1,QString interro2,QString interro3,QString devoir1,QString devoir2);
private slots:
    void on_enregisterEleve_clicked();

    void on_afficherMatiere_clicked();

    void on_afficherTableCompo_clicked();

    void on_ajouterLigneCompo_clicked();

    void on_supprimerLigneCompo_clicked();

    void on_afficherListeEleve_clicked();

private:
    QSqlQueryModel *modeleMatiere;
    QSqlTableModel *modeleCompo;
    QSqlTableModel *modeleEleve;
    QTableView *tableView;
    QTableView *tableView3;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
