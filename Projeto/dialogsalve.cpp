#include "dialogsalve.h"
#include "ui_dialogsalve.h"

DialogSalve::DialogSalve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSalve)
{
    ui->setupUi(this);
}

DialogSalve::~DialogSalve()
{
    delete ui;
}
