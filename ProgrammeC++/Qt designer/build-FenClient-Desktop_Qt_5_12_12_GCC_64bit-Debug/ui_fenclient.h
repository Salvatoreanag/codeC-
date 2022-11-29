/********************************************************************************
** Form generated from reading UI file 'fenclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENCLIENT_H
#define UI_FENCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenClient
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *serveurIP;
    QLabel *label_2;
    QSpinBox *serveurPort;
    QPushButton *boutonConnexion;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QTextEdit *listeMessages;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QLineEdit *pseudo;
    QLabel *label_4;
    QLineEdit *message;
    QPushButton *boutonEnvoyer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FenClient)
    {
        if (FenClient->objectName().isEmpty())
            FenClient->setObjectName(QString::fromUtf8("FenClient"));
        FenClient->resize(605, 463);
        centralWidget = new QWidget(FenClient);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(99, 30, 413, 341));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 30, -1, 30);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_10->addWidget(label);

        serveurIP = new QLineEdit(verticalLayoutWidget);
        serveurIP->setObjectName(QString::fromUtf8("serveurIP"));

        horizontalLayout_10->addWidget(serveurIP);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_10->addWidget(label_2);

        serveurPort = new QSpinBox(verticalLayoutWidget);
        serveurPort->setObjectName(QString::fromUtf8("serveurPort"));
        serveurPort->setMinimum(1);
        serveurPort->setMaximum(65536);
        serveurPort->setValue(50885);

        horizontalLayout_10->addWidget(serveurPort);

        boutonConnexion = new QPushButton(verticalLayoutWidget);
        boutonConnexion->setObjectName(QString::fromUtf8("boutonConnexion"));

        horizontalLayout_10->addWidget(boutonConnexion);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_10);

        listeMessages = new QTextEdit(verticalLayoutWidget);
        listeMessages->setObjectName(QString::fromUtf8("listeMessages"));
        listeMessages->setReadOnly(true);

        verticalLayout_3->addWidget(listeMessages);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_11->addWidget(label_3);

        pseudo = new QLineEdit(verticalLayoutWidget);
        pseudo->setObjectName(QString::fromUtf8("pseudo"));

        horizontalLayout_11->addWidget(pseudo);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_11->addWidget(label_4);

        message = new QLineEdit(verticalLayoutWidget);
        message->setObjectName(QString::fromUtf8("message"));

        horizontalLayout_11->addWidget(message);

        boutonEnvoyer = new QPushButton(verticalLayoutWidget);
        boutonEnvoyer->setObjectName(QString::fromUtf8("boutonEnvoyer"));

        horizontalLayout_11->addWidget(boutonEnvoyer);


        verticalLayout_3->addLayout(horizontalLayout_11);

        FenClient->setCentralWidget(centralWidget);
        verticalLayoutWidget->raise();
        menuBar = new QMenuBar(FenClient);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 605, 21));
        FenClient->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FenClient);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FenClient->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FenClient);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FenClient->setStatusBar(statusBar);

        retranslateUi(FenClient);

        QMetaObject::connectSlotsByName(FenClient);
    } // setupUi

    void retranslateUi(QMainWindow *FenClient)
    {
        FenClient->setWindowTitle(QApplication::translate("FenClient", "FenClient", nullptr));
        label->setText(QApplication::translate("FenClient", "IP du serveur:", nullptr));
        label_2->setText(QApplication::translate("FenClient", "Port du serveur:", nullptr));
        boutonConnexion->setText(QApplication::translate("FenClient", "Connexion", nullptr));
        label_3->setText(QApplication::translate("FenClient", "Pseudo:", nullptr));
        label_4->setText(QApplication::translate("FenClient", "Message:", nullptr));
        boutonEnvoyer->setText(QApplication::translate("FenClient", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenClient: public Ui_FenClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENCLIENT_H
