/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1296, 729);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(720, 10, 301, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Serif CJK SC")});
        font.setPointSize(25);
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(187, 191, 64);\n"
"color: rgb(206, 92, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 66, 67, 20));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(420, 60, 261, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(710, 70, 67, 17));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);"));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(780, 60, 101, 25));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(380, 101, 901, 361));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1110, 500, 171, 25));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(245, 121, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1100, 470, 181, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(92, 53, 102);"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 341, 431));
        groupBox->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 67, 17));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(100, 80, 211, 25));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 67, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 170, 67, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 40, 81, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 210, 141, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 250, 67, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 290, 67, 17));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 330, 171, 17));
        enregisterEleve = new QPushButton(groupBox);
        enregisterEleve->setObjectName(QString::fromUtf8("enregisterEleve"));
        enregisterEleve->setGeometry(QRect(110, 360, 89, 25));
        enregisterEleve->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);\n"
"color: rgb(0, 0, 0);"));
        matricule = new QLineEdit(groupBox);
        matricule->setObjectName(QString::fromUtf8("matricule"));
        matricule->setGeometry(QRect(100, 40, 151, 25));
        prenom = new QLineEdit(groupBox);
        prenom->setObjectName(QString::fromUtf8("prenom"));
        prenom->setGeometry(QRect(100, 120, 231, 25));
        dateNaissance = new QDateEdit(groupBox);
        dateNaissance->setObjectName(QString::fromUtf8("dateNaissance"));
        dateNaissance->setGeometry(QRect(150, 200, 121, 26));
        adresse = new QLineEdit(groupBox);
        adresse->setObjectName(QString::fromUtf8("adresse"));
        adresse->setGeometry(QRect(100, 240, 191, 25));
        statut = new QComboBox(groupBox);
        statut->addItem(QString());
        statut->addItem(QString());
        statut->setObjectName(QString::fromUtf8("statut"));
        statut->setGeometry(QRect(100, 280, 121, 25));
        sexe = new QComboBox(groupBox);
        sexe->addItem(QString());
        sexe->addItem(QString());
        sexe->setObjectName(QString::fromUtf8("sexe"));
        sexe->setGeometry(QRect(100, 160, 121, 25));
        contact = new QLineEdit(groupBox);
        contact->setObjectName(QString::fromUtf8("contact"));
        contact->setGeometry(QRect(190, 320, 141, 25));
        afficherListeEleve = new QPushButton(groupBox);
        afficherListeEleve->setObjectName(QString::fromUtf8("afficherListeEleve"));
        afficherListeEleve->setGeometry(QRect(10, 400, 141, 25));
        afficherListeEleve->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 212, 0);\n"
"color: rgb(0, 0, 0);"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 400, 161, 25));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 480, 345, 206));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("URW Chancery L")});
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setItalic(true);
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);"));

        verticalLayout_2->addWidget(label_12);

        tableView2 = new QTableView(verticalLayoutWidget);
        tableView2->setObjectName(QString::fromUtf8("tableView2"));

        verticalLayout_2->addWidget(tableView2);

        afficherTableCompo = new QPushButton(centralwidget);
        afficherTableCompo->setObjectName(QString::fromUtf8("afficherTableCompo"));
        afficherTableCompo->setGeometry(QRect(920, 60, 121, 25));
        afficherTableCompo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(143, 89, 2);\n"
"font: 75 italic 16pt \"URW Chancery L\";"));
        ajouterLigneCompo = new QPushButton(centralwidget);
        ajouterLigneCompo->setObjectName(QString::fromUtf8("ajouterLigneCompo"));
        ajouterLigneCompo->setGeometry(QRect(1050, 60, 21, 25));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        ajouterLigneCompo->setFont(font3);
        ajouterLigneCompo->setStyleSheet(QString::fromUtf8("color: rgb(78, 154, 6);"));
        supprimerLigneCompo = new QPushButton(centralwidget);
        supprimerLigneCompo->setObjectName(QString::fromUtf8("supprimerLigneCompo"));
        supprimerLigneCompo->setGeometry(QRect(1080, 60, 21, 25));
        QFont font4;
        font4.setPointSize(25);
        font4.setBold(true);
        supprimerLigneCompo->setFont(font4);
        supprimerLigneCompo->setStyleSheet(QString::fromUtf8("color: rgb(164, 0, 0);"));
        afficherMatiere = new QPushButton(centralwidget);
        afficherMatiere->setObjectName(QString::fromUtf8("afficherMatiere"));
        afficherMatiere->setGeometry(QRect(1130, 660, 151, 25));
        afficherMatiere->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(191, 64, 138);"));
        tableView3 = new QTableView(centralwidget);
        tableView3->setObjectName(QString::fromUtf8("tableView3"));
        tableView3->setGeometry(QRect(380, 471, 711, 211));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1296, 22));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tableau de bord", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\303\211l\303\250ve", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Semestre", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "semestre 1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "semestre 2", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "R\303\251sultast de la classe", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Statistique des r\303\251sultats", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Inscrire un(e) \303\251l\303\250ve de la classe", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Pr\303\251noms:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Sexe:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Matricule:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Date de naissance:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Adresse:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Statut:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Contact parent/tuteur:", nullptr));
        enregisterEleve->setText(QCoreApplication::translate("MainWindow", "Enregistrer", nullptr));
        statut->setItemText(0, QCoreApplication::translate("MainWindow", "Redoublant", nullptr));
        statut->setItemText(1, QCoreApplication::translate("MainWindow", "Nouveau", nullptr));

        sexe->setItemText(0, QCoreApplication::translate("MainWindow", "Masculin", nullptr));
        sexe->setItemText(1, QCoreApplication::translate("MainWindow", "Feminin", nullptr));

        afficherListeEleve->setText(QCoreApplication::translate("MainWindow", "Liste des \303\251l\303\250ves", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Supprimer un \303\251l\303\250ve", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Statistique de la classe", nullptr));
        afficherTableCompo->setText(QCoreApplication::translate("MainWindow", "Compositions", nullptr));
        ajouterLigneCompo->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        supprimerLigneCompo->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        afficherMatiere->setText(QCoreApplication::translate("MainWindow", "Afficher les mati\303\250res", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
