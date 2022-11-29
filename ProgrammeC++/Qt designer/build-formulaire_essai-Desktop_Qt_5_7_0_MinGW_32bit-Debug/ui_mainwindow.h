/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *Date_de_naissance;
    QDateEdit *date;
    QVBoxLayout *verticalLayout_7;
    QLabel *Nom;
    QLineEdit *name;
    QVBoxLayout *verticalLayout_6;
    QLabel *Lieu;
    QComboBox *lieu;
    QVBoxLayout *verticalLayout_3;
    QLabel *Prenoms;
    QLineEdit *surname;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *effacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(651, 495);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(109, 30, 421, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Date_de_naissance = new QLabel(verticalLayoutWidget);
        Date_de_naissance->setObjectName(QStringLiteral("Date_de_naissance"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Date_de_naissance->setFont(font1);

        verticalLayout_5->addWidget(Date_de_naissance);

        date = new QDateEdit(verticalLayoutWidget);
        date->setObjectName(QStringLiteral("date"));

        verticalLayout_5->addWidget(date);


        gridLayout_4->addLayout(verticalLayout_5, 2, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Nom = new QLabel(verticalLayoutWidget);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setFont(font1);

        verticalLayout_7->addWidget(Nom);

        name = new QLineEdit(verticalLayoutWidget);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout_7->addWidget(name);


        gridLayout_4->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Lieu = new QLabel(verticalLayoutWidget);
        Lieu->setObjectName(QStringLiteral("Lieu"));
        Lieu->setFont(font1);

        verticalLayout_6->addWidget(Lieu);

        lieu = new QComboBox(verticalLayoutWidget);
        lieu->setObjectName(QStringLiteral("lieu"));

        verticalLayout_6->addWidget(lieu);


        gridLayout_4->addLayout(verticalLayout_6, 2, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Prenoms = new QLabel(verticalLayoutWidget);
        Prenoms->setObjectName(QStringLiteral("Prenoms"));
        Prenoms->setFont(font1);

        verticalLayout_3->addWidget(Prenoms);

        surname = new QLineEdit(verticalLayoutWidget);
        surname->setObjectName(QStringLiteral("surname"));

        verticalLayout_3->addWidget(surname);


        gridLayout_4->addLayout(verticalLayout_3, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        ok = new QPushButton(verticalLayoutWidget);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout_4->addWidget(ok);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        effacer = new QPushButton(verticalLayoutWidget);
        effacer->setObjectName(QStringLiteral("effacer"));

        horizontalLayout_4->addWidget(effacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Interface graphique", 0));
        Date_de_naissance->setText(QApplication::translate("MainWindow", "Date de naissance", 0));
        Nom->setText(QApplication::translate("MainWindow", "Nom:", 0));
        Lieu->setText(QApplication::translate("MainWindow", "Lieu", 0));
        Prenoms->setText(QApplication::translate("MainWindow", "Pr\303\251noms:", 0));
        ok->setText(QApplication::translate("MainWindow", "Ok", 0));
        effacer->setText(QApplication::translate("MainWindow", "Effacer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
