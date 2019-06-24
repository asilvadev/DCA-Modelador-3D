#include "plotter.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>


Plotter::Plotter(QWidget *parent): QWidget (parent)
{
    corR = 0;
    corG = 0;
    corB = 0;
    transpA = 255;
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QPen pen;
    QBrush brush;

    p.setRenderHint(QPainter::Antialiasing);
    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);
    p.setPen(pen);
    brush.setColor(QColor(corR, corG, corB, transpA));
    brush.setStyle(Qt::SolidPattern);
    p.setBrush(brush);
    p.drawRect(0,0,width(),height());

}

// PEGA O VALOR DO LCD int E ATRIBUI PARA A VARIAVEL DO PLOTTER

void Plotter::mudaCorR(int cR)
{
    corR = cR;
    repaint();
}

void Plotter::mudaCorG(int cG)
{
    corG = cG;
    repaint();
}

void Plotter::mudaCorB(int cB)
{
    corB = cB;
    repaint();
}

void Plotter::mudaTranspA(int tA)
{
    transpA = tA;
    repaint();
}
