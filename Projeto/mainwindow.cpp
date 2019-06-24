#include <QString>
#include <QProcess>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialogmatriz.h"
#include "sculptor.h"
#include "plottermatriz.h"
#include "dialoginfo.h"
#include "dialogmatriz.h"
#include "dialogsalve.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->horizontalSlider_R->setMaximum(255);
    ui->horizontalSlider_G->setMaximum(255);
    ui->horizontalSlider_B->setMaximum(255);
    ui->horizontalSlider_transparencia->setMaximum(255);
    ui->lcdNumber_transparencia->display(255);
    ui->horizontalSlider_Dimx->setMaximum(ui->widgetPloterMatriz->scultporTamX-1);
    ui->horizontalSlider_Dimy->setMaximum(ui->widgetPloterMatriz->scultporTamY-1);
    ui->horizontalSlider_Dimz->setMaximum(ui->widgetPloterMatriz->scultporTamZ-1);
    ui->horizontalSlider_Raio->setMaximum(ui->widgetPloterMatriz->scultporTamX/2 -1);
    ui->horizontalSlider_Rx->setMaximum(ui->widgetPloterMatriz->scultporTamX/2 -1);
    ui->horizontalSlider_Ry->setMaximum(ui->widgetPloterMatriz->scultporTamY/2 -1);
    ui->horizontalSlider_Rz->setMaximum(ui->widgetPloterMatriz->scultporTamZ/2 -1);
    ui->lcdNumber_Dimx->display(1);
    ui->lcdNumber_Dimy->display(1);
    ui->lcdNumber_Dimz->display(1);
    ui->lcdNumber_Raio->display(1);
    ui->lcdNumber_Rx->display(1);
    ui->lcdNumber_Ry->display(1);
    ui->lcdNumber_Rz->display(1);
    ui->horizontalSliderPlano->setValue(ui->widgetPloterMatriz->scultporTamZ/2);
    ui->horizontalSliderPlano->setMaximum(ui->widgetPloterMatriz->scultporTamZ -1);

    connect(ui->actionputVoxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(putVox()));

    connect(ui->actioncutVoxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cutVox()));

    connect(ui->actionputBox,
            SIGNAL(triggered(bool)),
            this,
            SLOT(putBox()));

    connect(ui->actioncutBox,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cutBox()));

    connect(ui->actionputSphere,
            SIGNAL(triggered(bool)),
            this,
            SLOT(putSphere()));

    connect(ui->actioncutSphere,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cutSphere()));

    connect(ui->actionputElipse,
            SIGNAL(triggered(bool)),
            this,
            SLOT(putEllipse()));

    connect(ui->actioncutElipse,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cutEllipse()));

    connect(ui->actionplanXY,
            SIGNAL(triggered(bool)),
            this,
            SLOT(planoXY()));

    connect(ui->actionplanZX,
            SIGNAL(triggered(bool)),
            this,
            SLOT(planoZX()));

    connect(ui->actionplanYZ,
            SIGNAL(triggered(bool)),
            this,
            SLOT(planoYZ()));

    connect(ui->horizontalSlider_Dimx,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaTamX(int)));

    connect(ui->horizontalSlider_Dimy,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaTamY(int)));

    connect(ui->horizontalSlider_Dimz,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaTamZ(int)));

    connect(ui->horizontalSlider_Raio,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaRaio(int)));

    connect(ui->horizontalSlider_Rx,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaRaioX(int)));

    connect(ui->horizontalSlider_Ry,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaRaioY(int)));

    connect(ui->horizontalSlider_Rz,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaRaioZ(int)));

    connect(ui->horizontalSlider_R,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaCorR(int)));

    connect(ui->horizontalSlider_G,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaCorG(int)));

    connect(ui->horizontalSlider_B,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaCorB(int)));

    connect(ui->horizontalSlider_transparencia,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaTransparencia(int)));

    connect(ui->horizontalSliderPlano,
            SIGNAL(valueChanged(int)),
            ui->widgetPloterMatriz,
            SLOT(mudaCorte(int)));

    connect(ui->actionClose,
            SIGNAL(triggered(bool)),
            this,
            SLOT(finalizar()));

    connect(ui->actionFechar,
            SIGNAL(triggered(bool)),
            this,
            SLOT(finalizar()));

    connect(ui->actionSobre,
            SIGNAL(triggered(bool)),
            this,
            SLOT(popupInfo()));
    connect(ui->actionSobre_2,
            SIGNAL(triggered(bool)),
            this,
            SLOT(popupInfo()));
    connect(ui->actionSalvar,
            SIGNAL(triggered(bool)),
            this,
            SLOT(salvarFigura()));

    connect(ui->actionDimension,
            SIGNAL(triggered(bool)),
            this,
            SLOT(criaMatriz()));

    connect(ui->actionSave,
            SIGNAL(triggered(bool)),
            this,
            SLOT(salvarFigura()));

    connect(ui->horizontalSlider_R,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(mudaCorR(int)));

    connect(ui->horizontalSlider_G,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(mudaCorG(int)));

    connect(ui->horizontalSlider_B,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(mudaCorB(int)));

    connect(ui->horizontalSlider_transparencia,
            SIGNAL(valueChanged(int)),
            ui->widgetColor,
            SLOT(mudaTranspA(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::planoXY()
{
    ui->widgetPloterMatriz->plano = 1;
    emit ui->widgetPloterMatriz->escolherPlano(1);
    ui->widgetPloterMatriz->cortePlano = ui->widgetPloterMatriz->scultporTamZ/2;
    ui->horizontalSliderPlano->setMaximum(ui->widgetPloterMatriz->scultporTamZ -1);
    ui->widgetPloterMatriz->repaint();
}

void MainWindow::planoZX()
{
    ui->widgetPloterMatriz->plano = 2;
    emit ui->widgetPloterMatriz->escolherPlano(2);
    ui->horizontalSliderPlano->setMaximum(ui->widgetPloterMatriz->scultporTamY -1);
    ui->widgetPloterMatriz->cortePlano = ui->widgetPloterMatriz->scultporTamY/2;
    ui->widgetPloterMatriz->repaint();
}

void MainWindow::planoYZ()
{
    ui->widgetPloterMatriz->plano = 3;
    emit ui->widgetPloterMatriz->escolherPlano(3);
    ui->horizontalSliderPlano->setMaximum(ui->widgetPloterMatriz->scultporTamX -1);
    ui->widgetPloterMatriz->cortePlano = ui->widgetPloterMatriz->scultporTamX/2;
    ui->widgetPloterMatriz->repaint();
}

void MainWindow::putVox()
{
    ui->widgetPloterMatriz->forma = 1;
}

void MainWindow::cutVox()
{
    ui->widgetPloterMatriz->forma = 2;
}

void MainWindow::putBox()
{
    ui->widgetPloterMatriz->forma = 3;
}

void MainWindow::cutBox()
{
    ui->widgetPloterMatriz->forma = 4;
}

void MainWindow::putSphere()
{
    ui->widgetPloterMatriz->forma = 5;
}

void MainWindow::cutSphere()
{
    ui->widgetPloterMatriz->forma = 6;
}

void MainWindow::putEllipse()
{
    ui->widgetPloterMatriz->forma = 7;
}

void MainWindow::cutEllipse()
{
    ui->widgetPloterMatriz->forma = 8;
}

void MainWindow::finalizar()
{
    close();
}

void MainWindow::popupInfo()
{
    DialogInfo dialog;
    dialog.exec();
}

void MainWindow::popupSalvar()
{
    DialogSalve dialog;
    dialog.exec();
}

void MainWindow::salvarFigura()
{
    ui->widgetPloterMatriz->cubo->writeVECT("file.vect");
    ui->widgetPloterMatriz->cubo->writeOFF("file.off");
    popupSalvar();
}

void MainWindow::criaMatriz()
{
    DialogMatriz dialog;

    if(dialog.exec() == QDialog::Accepted){
        ui->widgetPloterMatriz->cubo->~Sculptor();
        ui->widgetPloterMatriz->scultporTamX = dialog.getX();
        ui->widgetPloterMatriz->scultporTamY = dialog.getY();
        ui->widgetPloterMatriz->scultporTamZ = dialog.getZ();
        ui->widgetPloterMatriz->cubo = new Sculptor(ui->widgetPloterMatriz->scultporTamX,ui->widgetPloterMatriz->scultporTamY,ui->widgetPloterMatriz->scultporTamZ);
        ui->widgetPloterMatriz->repaint();
    }
    ui->horizontalSlider_Dimx->setMaximum(ui->widgetPloterMatriz->scultporTamX-1);
    ui->horizontalSlider_Dimy->setMaximum(ui->widgetPloterMatriz->scultporTamY-1);
    ui->horizontalSlider_Dimz->setMaximum(ui->widgetPloterMatriz->scultporTamZ-1);
    ui->horizontalSlider_Raio->setMaximum(ui->widgetPloterMatriz->scultporTamX/2 -1);
    ui->horizontalSlider_Rx->setMaximum(ui->widgetPloterMatriz->scultporTamX/2 -1);
    ui->horizontalSlider_Ry->setMaximum(ui->widgetPloterMatriz->scultporTamY/2 -1);
    ui->horizontalSlider_Rz->setMaximum(ui->widgetPloterMatriz->scultporTamZ/2 -1);
    ui->horizontalSliderPlano->setValue(ui->widgetPloterMatriz->scultporTamZ/2);
    ui->horizontalSliderPlano->setMaximum(ui->widgetPloterMatriz->scultporTamZ -1);
    repaint();


}
