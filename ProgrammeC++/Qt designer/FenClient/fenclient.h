#ifndef FENCLIENT_H
#define FENCLIENT_H

#include <QMainWindow>
#include <QtWidgets>
#include <QtNetwork>
#include "ui_FenClient.h" // la fenêtre générée

namespace Ui {
class FenClient;
}
class FenClient : public QMainWindow
{
 Q_OBJECT

 public:
     FenClient();
     explicit FenClient(QWidget *parent = 0);
     ~FenClient();

 private slots:
     void on_boutonConnexion_clicked();
     void on_boutonEnvoyer_clicked();
     void on_message_returnPressed();
     void donneesRecues();
     void connecte();
     void deconnecte();
     void erreurSocket(QAbstractSocket::SocketError erreur);

 private:
     Ui::FenClient *ui;
     QTcpSocket *socket; // Représente le serveur
     quint16 tailleMessage;
};

#endif




/*
#include <QMainWindow>

namespace Ui {
class FenClient;
}

class FenClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenClient(QWidget *parent = 0);
    ~FenClient();

private:
    Ui::FenClient *ui;
};

#endif // FENCLIENT_H */
