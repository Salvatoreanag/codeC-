#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QTableView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    bool connexionBaseDeDonnee(); // On prototype ici la fonction de connexion à la bdd.

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addperson_clicked();

   // void on_deletepersonn_clicked();

    //void on_addtel_clicked();

private:
    QSqlTableModel *modelePersonne;
    QSqlTableModel *modeleTelephone;
    QTableView *vuePersonne;
    QTableView *vueTelephone;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
