#include "fenserveur.h"
#include "ui_fenserveur.h"

FenServeur::FenServeur(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FenServeur)
{
    ui->setupUi(this);
}

FenServeur::~FenServeur()
{
    delete ui;
}

