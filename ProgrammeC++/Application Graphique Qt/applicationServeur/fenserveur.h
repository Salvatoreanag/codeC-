#ifndef FENSERVEUR_H
#define FENSERVEUR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FenServeur; }
QT_END_NAMESPACE

class FenServeur : public QMainWindow
{
    Q_OBJECT

public:
    FenServeur(QWidget *parent = nullptr);
    ~FenServeur();

private:
    Ui::FenServeur *ui;
};
#endif // FENSERVEUR_H
