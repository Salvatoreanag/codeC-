#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> // Notre fenêtre héritera de cette classe inclus
#include <QtWidgets/QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; } // Ce code permet de lier Ui(user interface) au fichier mainwindow.h
QT_END_NAMESPACE

class MainWindow : public QMainWindow // On crée ici une classe MainWindow qui hérite de QMainWindow
{
    Q_OBJECT   // Il est une macro indispensable dans la gestion des évènements et de la mémoire

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void boutonclic(int num);

private:
    Ui::MainWindow *ui;
}; // Fin de la création de la classe

#endif // MAINWINDOW_H
