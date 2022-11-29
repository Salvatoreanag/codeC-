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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *nom;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *enregisterEleve;
    QLineEdit *matricule;
    QLineEdit *prenom;
    QDateEdit *dateNaissance;
    QLineEdit *adresse;
    QComboBox *statut;
    QComboBox *sexe;
    QLineEdit *contact;
    QPushButton *afficherListeEleve;
    QPushButton *pushButton_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_12;
    QTableView *tableView2;
    QPushButton *afficherTableCompo;
    QPushButton *ajouterLigneCompo;
    QPushButton *supprimerLigneCompo;
    QPushButton *afficherMatiere;
    QTableView *tableView3;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1296, 729);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(720, 10, 301, 41));
        QFont font;
        font.setFamily(QStringLiteral("Noto Serif CJK SC"));
        font.setPointSize(25);
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: rgb(187, 191, 64);\n"
"color: rgb(206, 92, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 66, 67, 20));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(52, 101, 164);"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(420, 60, 261, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(710, 70, 67, 17));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(52, 101, 164);"));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(780, 60, 101, 25));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(380, 101, 901, 361));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1110, 500, 171, 25));
        pushButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(245, 121, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1100, 470, 181, 25));
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(92, 53, 102);"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 341, 431));
        groupBox->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 90, 67, 17));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(100, 80, 211, 25));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 130, 67, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 170, 67, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 40, 81, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 210, 141, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 250, 67, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 290, 67, 17));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 330, 171, 17));
        enregisterEleve = new QPushButton(groupBox);
        enregisterEleve->setObjectName(QStringLiteral("enregisterEleve"));
        enregisterEleve->setGeometry(QRect(110, 360, 89, 25));
        enregisterEleve->setStyleSheet(QLatin1String("background-color: rgb(138, 226, 52);\n"
"color: rgb(0, 0, 0);"));
        matricule = new QLineEdit(groupBox);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(100, 40, 151, 25));
        prenom = new QLineEdit(groupBox);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(100, 120, 231, 25));
        dateNaissance = new QDateEdit(groupBox);
        dateNaissance->setObjectName(QStringLiteral("dateNaissance"));
        dateNaissance->setGeometry(QRect(150, 200, 121, 26));
        adresse = new QLineEdit(groupBox);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(100, 240, 191, 25));
        statut = new QComboBox(groupBox);
        statut->setObjectName(QStringLiteral("statut"));
        statut->setGeometry(QRect(100, 280, 121, 25));
        sexe = new QComboBox(groupBox);
        sexe->setObjectName(QStringLiteral("sexe"));
        sexe->setGeometry(QRect(100, 160, 121, 25));
        contact = new QLineEdit(groupBox);
        contact->setObjectName(QStringLiteral("contact"));
        contact->setGeometry(QRect(190, 320, 141, 25));
        afficherListeEleve = new QPushButton(groupBox);
        afficherListeEleve->setObjectName(QStringLiteral("afficherListeEleve"));
        afficherListeEleve->setGeometry(QRect(10, 400, 141, 25));
        afficherListeEleve->setStyleSheet(QLatin1String("background-color: rgb(237, 212, 0);\n"
"color: rgb(0, 0, 0);"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 400, 161, 25));
        pushButton_7->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 480, 345, 206));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font2;
        font2.setFamily(QStringLiteral("URW Chancery L"));
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_12->setFont(font2);
        label_12->setStyleSheet(QStringLiteral("color: rgb(52, 101, 164);"));

        verticalLayout_2->addWidget(label_12);

        tableView2 = new QTableView(verticalLayoutWidget);
        tableView2->setObjectName(QStringLiteral("tableView2"));

        verticalLayout_2->addWidget(tableView2);

        afficherTableCompo = new QPushButton(centralwidget);
        afficherTableCompo->setObjectName(QStringLiteral("afficherTableCompo"));
        afficherTableCompo->setGeometry(QRect(920, 60, 121, 25));
        afficherTableCompo->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(143, 89, 2);\n"
"font: 75 italic 16pt \"URW Chancery L\";"));
        ajouterLigneCompo = new QPushButton(centralwidget);
        ajouterLigneCompo->setObjectName(QStringLiteral("ajouterLigneCompo"));
        ajouterLigneCompo->setGeometry(QRect(1050, 60, 21, 25));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        ajouterLigneCompo->setFont(font3);
        ajouterLigneCompo->setStyleSheet(QStringLiteral("color: rgb(78, 154, 6);"));
        supprimerLigneCompo = new QPushButton(centralwidget);
        supprimerLigneCompo->setObjectName(QStringLiteral("supprimerLigneCompo"));
        supprimerLigneCompo->setGeometry(QRect(1080, 60, 21, 25));
        QFont font4;
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setWeight(75);
        supprimerLigneCompo->setFont(font4);
        supprimerLigneCompo->setStyleSheet(QStringLiteral("color: rgb(164, 0, 0);"));
        afficherMatiere = new QPushButton(centralwidget);
        afficherMatiere->setObjectName(QStringLiteral("afficherMatiere"));
        afficherMatiere->setGeometry(QRect(1130, 660, 151, 25));
        afficherMatiere->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(191, 64, 138);"));
        tableView3 = new QTableView(centralwidget);
        tableView3->setObjectName(QStringLiteral("tableView3"));
        tableView3->setGeometry(QRect(380, 471, 711, 211));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1296, 22));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Tableau de bord", 0));
        label_2->setText(QApplication::translate("MainWindow", "\303\211l\303\250ve", 0));
        label_3->setText(QApplication::translate("MainWindow", "Semestre", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "semestre 1", 0)
         << QApplication::translate("MainWindow", "semestre 2", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "R\303\251sultast de la classe", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Statistique des r\303\251sultats", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Inscrire un(e) \303\251l\303\250ve de la classe", 0));
        label_4->setText(QApplication::translate("MainWindow", "Nom:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Pr\303\251noms:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Sexe:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Matricule:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Date de naissance:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Adresse:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Statut:", 0));
        label_11->setText(QApplication::translate("MainWindow", "Contact parent/tuteur:", 0));
        enregisterEleve->setText(QApplication::translate("MainWindow", "Enregistrer", 0));
        statut->clear();
        statut->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Redoublant", 0)
         << QApplication::translate("MainWindow", "Nouveau", 0)
        );
        sexe->clear();
        sexe->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Masculin", 0)
         << QApplication::translate("MainWindow", "Feminin", 0)
        );
        afficherListeEleve->setText(QApplication::translate("MainWindow", "Liste des \303\251l\303\250ves", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Supprimer un \303\251l\303\250ve", 0));
        label_12->setText(QApplication::translate("MainWindow", "Statistique de la classe", 0));
        afficherTableCompo->setText(QApplication::translate("MainWindow", "Compositions", 0));
        ajouterLigneCompo->setText(QApplication::translate("MainWindow", "+", 0));
        supprimerLigneCompo->setText(QApplication::translate("MainWindow", "-", 0));
        afficherMatiere->setText(QApplication::translate("MainWindow", "Afficher les mati\303\250res", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
