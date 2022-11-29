/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableView *vuePersonne;
    QTableView *vueTelephone;
    QPushButton *addperson;
    QPushButton *deletepersonn;
    QPushButton *addtel;
    QPushButton *deletetel;
    QSpinBox *spinBox;
    QDateEdit *dateEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 600);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 561, 21));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        vuePersonne = new QTableView(centralwidget);
        vuePersonne->setObjectName(QString::fromUtf8("vuePersonne"));
        vuePersonne->setGeometry(QRect(10, 60, 681, 181));
        vueTelephone = new QTableView(centralwidget);
        vueTelephone->setObjectName(QString::fromUtf8("vueTelephone"));
        vueTelephone->setGeometry(QRect(10, 290, 681, 171));
        addperson = new QPushButton(centralwidget);
        addperson->setObjectName(QString::fromUtf8("addperson"));
        addperson->setGeometry(QRect(60, 470, 89, 25));
        deletepersonn = new QPushButton(centralwidget);
        deletepersonn->setObjectName(QString::fromUtf8("deletepersonn"));
        deletepersonn->setGeometry(QRect(200, 470, 121, 25));
        addtel = new QPushButton(centralwidget);
        addtel->setObjectName(QString::fromUtf8("addtel"));
        addtel->setGeometry(QRect(380, 470, 89, 25));
        deletetel = new QPushButton(centralwidget);
        deletetel->setObjectName(QString::fromUtf8("deletetel"));
        deletetel->setGeometry(QRect(540, 470, 89, 25));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(290, 250, 121, 31));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(429, 250, 261, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 704, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Affichage des personnnes et de leurs num\303\251ros respectifs", nullptr));
        addperson->setText(QApplication::translate("MainWindow", "Add Person", nullptr));
        deletepersonn->setText(QApplication::translate("MainWindow", "Delete Person", nullptr));
        addtel->setText(QApplication::translate("MainWindow", "Add T\303\251l", nullptr));
        deletetel->setText(QApplication::translate("MainWindow", "Delete T\303\251l", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
