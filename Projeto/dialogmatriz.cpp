#include "dialogmatriz.h"
#include "ui_dialogmatriz.h"

DialogMatriz::DialogMatriz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMatriz)
{
    ui->setupUi(this);
}

DialogMatriz::~DialogMatriz()
{
    delete ui;
}

int DialogMatriz::getX()
{
    return ui->spinBox_dX->value();
}
int DialogMatriz::getY()
{
    return ui->spinBox_dY->value();
}
int DialogMatriz::getZ()
{
    return ui->spinBox_dZ->value();
}
