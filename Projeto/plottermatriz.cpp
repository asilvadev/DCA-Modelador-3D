#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>
#include <QtDebug>
#include <vector>
#include <iostream>
#include "plottermatriz.h"
#include "sculptor.h"

PlotterMatriz::PlotterMatriz(QWidget *parent) : QWidget(parent)
{
    scultporTamX = 25;
    scultporTamY = 25;
    scultporTamZ = 25;

    cubo = new Sculptor(scultporTamX, scultporTamY, scultporTamZ);

    cortePlano = scultporTamZ/2;
    plano = 1;

    tamX = 1;
    tamY = 1;
    tamZ = 1;

    raio = 1;
    raioX = 1;
    raioY = 1;
    raioZ = 1;

    corR = 0;
    corG = 0;
    corB = 0;
    transparencia = 255;

    forma = 1;
}

void PlotterMatriz::paintEvent(QPaintEvent *event)
{
    QPainter pa(this);
    QPen pen;
    QBrush brush;
    pen.setColor(QColor(128,128,128,255));
    pen.setWidth(1);
    pa.setPen(pen);
    brush.setColor(QColor(255,255,255,0));
    brush.setStyle(Qt::SolidPattern);
    pa.setBrush(brush);
    mtrz.clear();
    mtrz = cubo ->readMx(cortePlano, plano);

    int dim1 = width()/mtrz[0].size();
    int dim2 = height()/mtrz.size();

    if(dim1>dim2){
        tamQ=dim2;
    }
    else {
        tamQ=dim1;
    }

    for(unsigned int i =0; i<mtrz.size(); i++){
        for(unsigned int j =0; j<mtrz[0].size(); j++){
            pa.drawRect(i*tamQ,j*tamQ,tamQ, tamQ);
        }
    }

    for(unsigned int i=0; i<mtrz.size();i++){    //trabalhar com iterators pra desenhar voxels ligados
        for(unsigned int j=0; j<mtrz[0].size();j++){
            if(mtrz[i][j].isOn){
                brush.setColor(QColor(mtrz[i][j].r,mtrz[i][j].g,mtrz[i][j].b,mtrz[i][j].a));   //Cor setada por sliders
                brush.setStyle(Qt::SolidPattern);
                pa.setBrush(brush);
                int xcenter =i*tamQ;
                int ycenter =j*tamQ;
                pa.drawEllipse(xcenter,ycenter,tamQ,tamQ);
            }
        }
    }
}

void PlotterMatriz::mouseMoveEvent(QMouseEvent *event){
    emit moveX(event->x());
    emit moveY(event->y());

    mouseX = (event->x())/tamQ;
    mouseY = (event->y())/tamQ;

    switch(plano){
    case 1:
        posX=mouseX;
        posY=mouseY;
        posZ=cortePlano;
        break;
    case 2:
        posX=mouseY;
        posY=cortePlano;
        posZ=mouseX;
        break;
    case 3:
        posX=cortePlano;
        posY=mouseX;
        posZ=mouseY;
        break;
    case 4:
        posX=mouseY;
        posY=scultporTamY-1-mouseX;
        posZ=cortePlano;
        break;
    case 5:
        posX=scultporTamX-1-mouseX;
        posY=cortePlano;
        posZ=mouseY;
        break;
    case 6:
        posX=cortePlano;
        posY=mouseY;
        posZ=scultporTamZ-1-mouseX;
        break;
    case 7:
        posX=scultporTamX-1-mouseX;
        posY=scultporTamY-1-mouseY;
        posZ=cortePlano;
        break;
    case 8:
        posX=scultporTamX-1-mouseY;
        posY=cortePlano;
        posZ=scultporTamZ-1-mouseX;
        break;
    }

    emit mouseLinha(posX);
    emit mouseColuna(posY);

    PlotterMatriz::desenharForma(forma, mousePressed);
}

void PlotterMatriz::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        emit clickX(event->x());
        emit clickY(event->y());
        mousePressed = true;
        mouseX = (event->x())/tamQ;
        mouseY = (event->y())/tamQ;

        switch(plano){
        case 1:
            posX=mouseX;
            posY=mouseY;
            posZ=cortePlano;
            break;
        case 2:
            posX=mouseY;
            posY=cortePlano;
            posZ=mouseX;
            break;
        case 3:
            posX=cortePlano;
            posY=mouseX;
            posZ=mouseY;
            break;
        case 4:
            posX=mouseY;
            posY=scultporTamY-1-mouseX;
            posZ=cortePlano;
            break;
        case 5:
            posX=scultporTamX-1-mouseX;
            posY=cortePlano;
            posZ=mouseY;
            break;
        case 6:
            posX=cortePlano;
            posY=mouseY;
            posZ=scultporTamZ-1-mouseX;
            break;
        case 7:
            posX=scultporTamX-1-mouseX;
            posY=scultporTamY-1-mouseY;
            posZ=cortePlano;
            break;
        case 8:
            posX=scultporTamX-1-mouseY;
            posY=cortePlano;
            posZ=scultporTamZ-1-mouseX;
            break;
        }

        emit mouseLinha(posX);
        emit mouseColuna(posY);

        PlotterMatriz::desenharForma(forma,mousePressed);
    }
}


void PlotterMatriz::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        mousePressed = false;
    }
}


void PlotterMatriz::desenharForma(int forma, bool mousePressed){

    if(mousePressed){
        if(forma == 1)
        {
            cubo->setColor(corR, corG, corB, transparencia);
            cubo->putVoxel(posX, posY, posZ);
        }
        if(forma == 2)
        {
            cubo->cutVoxel(posX, posY, posZ);
        }
        if(forma == 3)
        {
            cubo->setColor(corR, corG, corB, transparencia);
            cubo->putBox(posX, (posX+tamX), posY, (posY+tamY), posZ, (posZ+tamZ));

        }
        if(forma == 4)
        {
            cubo->cutBox(posX, (posX+tamX), posY, (posY+tamY), posZ, (posZ+tamZ));
        }
        if(forma == 5)
        {
            cubo->setColor(corR, corG, corB, transparencia);
            cubo->putSphere(posX, posY, posZ, raio);

        }
        if(forma == 6)
        {
            cubo->cutSphere(posX, posY, posZ, raio);
        }
        if(forma == 7)
        {
            cubo->setColor(corR, corG, corB, transparencia);
            cubo->putEllipsoid(posX, posY, posZ, raioX, raioY, raioZ);

        }
        if(forma == 8)
        {
            cubo->cutEllipsoid(posX, posY, posZ, raioX, raioY, raioZ);
        }
        repaint();
    }
}

void PlotterMatriz::mudaCorR(int red)
{
    corR = red;
}

void PlotterMatriz::mudaCorG(int green)
{
    corG = green;
}

void PlotterMatriz::mudaCorB(int blue)
{
    corB = blue;
}

void PlotterMatriz::mudaTransparencia(int a)
{
    transparencia = a;
}

void PlotterMatriz::mudaTamX(int size)
{
    tamX = size;
}

void PlotterMatriz::mudaTamY(int size)
{
    tamY = size;
}

void PlotterMatriz::mudaTamZ(int size)
{
    tamZ = size;
}

void PlotterMatriz::mudaRaio(int rd)
{
    raio=rd;
}

void PlotterMatriz::mudaRaioX(int rx)
{
    raioX = rx;
}

void PlotterMatriz::mudaRaioY(int ry)
{
    raioY = ry;
}

void PlotterMatriz::mudaRaioZ(int rz)
{
    raioZ = rz;
}

void PlotterMatriz::mudaCorte(int pln)
{
    cortePlano = pln;
    repaint();
}

void PlotterMatriz::mudaScpTamX(int scpX)
{
    scultporTamX = scpX;
}

void PlotterMatriz::mudaScpTamY(int scpY)
{
    scultporTamY = scpY;
}

void PlotterMatriz::mudaScpTamZ(int scpZ)
{
    scultporTamZ = scpZ;
}
