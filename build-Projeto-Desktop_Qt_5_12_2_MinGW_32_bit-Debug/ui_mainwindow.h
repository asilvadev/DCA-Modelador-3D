/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <plottermatriz.h>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionputVoxel;
    QAction *actioncutVoxel;
    QAction *actionputBox;
    QAction *actioncutBox;
    QAction *actionputSphere;
    QAction *actioncutSphere;
    QAction *actionputElipse;
    QAction *actioncutElipse;
    QAction *actionplanXY;
    QAction *actionplanYZ;
    QAction *actionplanZX;
    QAction *actionSobre_2;
    QAction *actionDimension;
    QAction *actionSalvar;
    QAction *actionFechar;
    QAction *actionSobre;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *Cores;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *color_R;
    QSlider *horizontalSlider_R;
    QLCDNumber *lcdNumber_R;
    QHBoxLayout *horizontalLayout_3;
    QLabel *color_G;
    QSlider *horizontalSlider_G;
    QLCDNumber *lcdNumber_G;
    QHBoxLayout *horizontalLayout_4;
    QLabel *color_B;
    QSlider *horizontalSlider_B;
    QLCDNumber *lcdNumber_B;
    QHBoxLayout *horizontalLayout;
    QLabel *transparencia;
    QSlider *horizontalSlider_transparencia;
    QLCDNumber *lcdNumber_transparencia;
    Plotter *widgetColor;
    QGroupBox *Sphere;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSlider *horizontalSlider_Raio;
    QLCDNumber *lcdNumber_Raio;
    QGroupBox *Elipe;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSlider *horizontalSlider_Rx;
    QLCDNumber *lcdNumber_Rx;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSlider *horizontalSlider_Ry;
    QLCDNumber *lcdNumber_Ry;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QSlider *horizontalSlider_Rz;
    QLCDNumber *lcdNumber_Rz;
    QGroupBox *Box;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QSlider *horizontalSlider_Dimx;
    QLCDNumber *lcdNumber_Dimx;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QSlider *horizontalSlider_Dimy;
    QLCDNumber *lcdNumber_Dimy;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QSlider *horizontalSlider_Dimz;
    QLCDNumber *lcdNumber_Dimz;
    QVBoxLayout *verticalLayout_6;
    PlotterMatriz *widgetPloterMatriz;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_14;
    QSlider *horizontalSliderPlano;
    QLabel *slider_XY;
    QMenuBar *menuBar;
    QMenu *menuFechar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(901, 716);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/image/closebox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/image/savebox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionputVoxel = new QAction(MainWindow);
        actionputVoxel->setObjectName(QString::fromUtf8("actionputVoxel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/image/putvoxel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionputVoxel->setIcon(icon2);
        actioncutVoxel = new QAction(MainWindow);
        actioncutVoxel->setObjectName(QString::fromUtf8("actioncutVoxel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/image/cutvoxel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutVoxel->setIcon(icon3);
        actionputBox = new QAction(MainWindow);
        actionputBox->setObjectName(QString::fromUtf8("actionputBox"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/image/putbox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionputBox->setIcon(icon4);
        actioncutBox = new QAction(MainWindow);
        actioncutBox->setObjectName(QString::fromUtf8("actioncutBox"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/image/cutbox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutBox->setIcon(icon5);
        actionputSphere = new QAction(MainWindow);
        actionputSphere->setObjectName(QString::fromUtf8("actionputSphere"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/image/putsphere.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionputSphere->setIcon(icon6);
        actioncutSphere = new QAction(MainWindow);
        actioncutSphere->setObjectName(QString::fromUtf8("actioncutSphere"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/image/cutsphere.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutSphere->setIcon(icon7);
        actionputElipse = new QAction(MainWindow);
        actionputElipse->setObjectName(QString::fromUtf8("actionputElipse"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/image/putelipse.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionputElipse->setIcon(icon8);
        actioncutElipse = new QAction(MainWindow);
        actioncutElipse->setObjectName(QString::fromUtf8("actioncutElipse"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/image/cutelipse.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutElipse->setIcon(icon9);
        actionplanXY = new QAction(MainWindow);
        actionplanXY->setObjectName(QString::fromUtf8("actionplanXY"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/image/xy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionplanXY->setIcon(icon10);
        actionplanYZ = new QAction(MainWindow);
        actionplanYZ->setObjectName(QString::fromUtf8("actionplanYZ"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/image/yz.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionplanYZ->setIcon(icon11);
        actionplanZX = new QAction(MainWindow);
        actionplanZX->setObjectName(QString::fromUtf8("actionplanZX"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/image/zx.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionplanZX->setIcon(icon12);
        actionSobre_2 = new QAction(MainWindow);
        actionSobre_2->setObjectName(QString::fromUtf8("actionSobre_2"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resources/image/infobar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre_2->setIcon(icon13);
        actionDimension = new QAction(MainWindow);
        actionDimension->setObjectName(QString::fromUtf8("actionDimension"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resources/image/dim.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDimension->setIcon(icon14);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/resources/image/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon15);
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QString::fromUtf8("actionFechar"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/resources/image/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFechar->setIcon(icon16);
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/resources/image/information.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon17);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_15 = new QHBoxLayout(centralWidget);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Cores = new QGroupBox(centralWidget);
        Cores->setObjectName(QString::fromUtf8("Cores"));
        verticalLayout_2 = new QVBoxLayout(Cores);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        color_R = new QLabel(Cores);
        color_R->setObjectName(QString::fromUtf8("color_R"));

        horizontalLayout_2->addWidget(color_R);

        horizontalSlider_R = new QSlider(Cores);
        horizontalSlider_R->setObjectName(QString::fromUtf8("horizontalSlider_R"));
        horizontalSlider_R->setMaximum(255);
        horizontalSlider_R->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_R);

        lcdNumber_R = new QLCDNumber(Cores);
        lcdNumber_R->setObjectName(QString::fromUtf8("lcdNumber_R"));

        horizontalLayout_2->addWidget(lcdNumber_R);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        color_G = new QLabel(Cores);
        color_G->setObjectName(QString::fromUtf8("color_G"));

        horizontalLayout_3->addWidget(color_G);

        horizontalSlider_G = new QSlider(Cores);
        horizontalSlider_G->setObjectName(QString::fromUtf8("horizontalSlider_G"));
        horizontalSlider_G->setMaximum(255);
        horizontalSlider_G->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_G);

        lcdNumber_G = new QLCDNumber(Cores);
        lcdNumber_G->setObjectName(QString::fromUtf8("lcdNumber_G"));

        horizontalLayout_3->addWidget(lcdNumber_G);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        color_B = new QLabel(Cores);
        color_B->setObjectName(QString::fromUtf8("color_B"));

        horizontalLayout_4->addWidget(color_B);

        horizontalSlider_B = new QSlider(Cores);
        horizontalSlider_B->setObjectName(QString::fromUtf8("horizontalSlider_B"));
        horizontalSlider_B->setMaximum(255);
        horizontalSlider_B->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_B);

        lcdNumber_B = new QLCDNumber(Cores);
        lcdNumber_B->setObjectName(QString::fromUtf8("lcdNumber_B"));

        horizontalLayout_4->addWidget(lcdNumber_B);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        transparencia = new QLabel(Cores);
        transparencia->setObjectName(QString::fromUtf8("transparencia"));

        horizontalLayout->addWidget(transparencia);

        horizontalSlider_transparencia = new QSlider(Cores);
        horizontalSlider_transparencia->setObjectName(QString::fromUtf8("horizontalSlider_transparencia"));
        horizontalSlider_transparencia->setMaximum(255);
        horizontalSlider_transparencia->setSliderPosition(255);
        horizontalSlider_transparencia->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_transparencia);

        lcdNumber_transparencia = new QLCDNumber(Cores);
        lcdNumber_transparencia->setObjectName(QString::fromUtf8("lcdNumber_transparencia"));

        horizontalLayout->addWidget(lcdNumber_transparencia);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        widgetColor = new Plotter(Cores);
        widgetColor->setObjectName(QString::fromUtf8("widgetColor"));

        horizontalLayout_5->addWidget(widgetColor);

        horizontalLayout_5->setStretch(0, 60);
        horizontalLayout_5->setStretch(1, 40);

        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_5->addWidget(Cores);

        Sphere = new QGroupBox(centralWidget);
        Sphere->setObjectName(QString::fromUtf8("Sphere"));
        horizontalLayout_13 = new QHBoxLayout(Sphere);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(Sphere);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        horizontalSlider_Raio = new QSlider(Sphere);
        horizontalSlider_Raio->setObjectName(QString::fromUtf8("horizontalSlider_Raio"));
        horizontalSlider_Raio->setSliderPosition(1);
        horizontalSlider_Raio->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_Raio);

        lcdNumber_Raio = new QLCDNumber(Sphere);
        lcdNumber_Raio->setObjectName(QString::fromUtf8("lcdNumber_Raio"));

        horizontalLayout_6->addWidget(lcdNumber_Raio);


        horizontalLayout_13->addLayout(horizontalLayout_6);


        verticalLayout_5->addWidget(Sphere);

        Elipe = new QGroupBox(centralWidget);
        Elipe->setObjectName(QString::fromUtf8("Elipe"));
        verticalLayout_3 = new QVBoxLayout(Elipe);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(Elipe);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        horizontalSlider_Rx = new QSlider(Elipe);
        horizontalSlider_Rx->setObjectName(QString::fromUtf8("horizontalSlider_Rx"));
        horizontalSlider_Rx->setSliderPosition(1);
        horizontalSlider_Rx->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_Rx);

        lcdNumber_Rx = new QLCDNumber(Elipe);
        lcdNumber_Rx->setObjectName(QString::fromUtf8("lcdNumber_Rx"));
        lcdNumber_Rx->setMinimumSize(QSize(64, 0));
        lcdNumber_Rx->setMidLineWidth(0);
        lcdNumber_Rx->setSmallDecimalPoint(false);
        lcdNumber_Rx->setDigitCount(5);
        lcdNumber_Rx->setMode(QLCDNumber::Dec);
        lcdNumber_Rx->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_Rx->setProperty("intValue", QVariant(0));

        horizontalLayout_7->addWidget(lcdNumber_Rx);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(Elipe);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        horizontalSlider_Ry = new QSlider(Elipe);
        horizontalSlider_Ry->setObjectName(QString::fromUtf8("horizontalSlider_Ry"));
        horizontalSlider_Ry->setSliderPosition(1);
        horizontalSlider_Ry->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_Ry);

        lcdNumber_Ry = new QLCDNumber(Elipe);
        lcdNumber_Ry->setObjectName(QString::fromUtf8("lcdNumber_Ry"));

        horizontalLayout_8->addWidget(lcdNumber_Ry);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(Elipe);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        horizontalSlider_Rz = new QSlider(Elipe);
        horizontalSlider_Rz->setObjectName(QString::fromUtf8("horizontalSlider_Rz"));
        horizontalSlider_Rz->setValue(1);
        horizontalSlider_Rz->setSliderPosition(1);
        horizontalSlider_Rz->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_Rz);

        lcdNumber_Rz = new QLCDNumber(Elipe);
        lcdNumber_Rz->setObjectName(QString::fromUtf8("lcdNumber_Rz"));

        horizontalLayout_9->addWidget(lcdNumber_Rz);


        verticalLayout_3->addLayout(horizontalLayout_9);


        verticalLayout_5->addWidget(Elipe);

        Box = new QGroupBox(centralWidget);
        Box->setObjectName(QString::fromUtf8("Box"));
        verticalLayout_4 = new QVBoxLayout(Box);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(Box);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        horizontalSlider_Dimx = new QSlider(Box);
        horizontalSlider_Dimx->setObjectName(QString::fromUtf8("horizontalSlider_Dimx"));
        horizontalSlider_Dimx->setSliderPosition(1);
        horizontalSlider_Dimx->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_Dimx);

        lcdNumber_Dimx = new QLCDNumber(Box);
        lcdNumber_Dimx->setObjectName(QString::fromUtf8("lcdNumber_Dimx"));

        horizontalLayout_10->addWidget(lcdNumber_Dimx);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(Box);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        horizontalSlider_Dimy = new QSlider(Box);
        horizontalSlider_Dimy->setObjectName(QString::fromUtf8("horizontalSlider_Dimy"));
        horizontalSlider_Dimy->setSliderPosition(1);
        horizontalSlider_Dimy->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSlider_Dimy);

        lcdNumber_Dimy = new QLCDNumber(Box);
        lcdNumber_Dimy->setObjectName(QString::fromUtf8("lcdNumber_Dimy"));

        horizontalLayout_11->addWidget(lcdNumber_Dimy);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_7 = new QLabel(Box);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_12->addWidget(label_7);

        horizontalSlider_Dimz = new QSlider(Box);
        horizontalSlider_Dimz->setObjectName(QString::fromUtf8("horizontalSlider_Dimz"));
        horizontalSlider_Dimz->setSliderPosition(1);
        horizontalSlider_Dimz->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalSlider_Dimz);

        lcdNumber_Dimz = new QLCDNumber(Box);
        lcdNumber_Dimz->setObjectName(QString::fromUtf8("lcdNumber_Dimz"));

        horizontalLayout_12->addWidget(lcdNumber_Dimz);


        verticalLayout_4->addLayout(horizontalLayout_12);


        verticalLayout_5->addWidget(Box);

        verticalLayout_5->setStretch(0, 25);
        verticalLayout_5->setStretch(1, 10);
        verticalLayout_5->setStretch(2, 25);
        verticalLayout_5->setStretch(3, 25);

        horizontalLayout_15->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widgetPloterMatriz = new PlotterMatriz(centralWidget);
        widgetPloterMatriz->setObjectName(QString::fromUtf8("widgetPloterMatriz"));
        widgetPloterMatriz->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_6->addWidget(widgetPloterMatriz);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_14 = new QHBoxLayout(groupBox);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSliderPlano = new QSlider(groupBox);
        horizontalSliderPlano->setObjectName(QString::fromUtf8("horizontalSliderPlano"));
        horizontalSliderPlano->setMaximum(100);
        horizontalSliderPlano->setValue(0);
        horizontalSliderPlano->setSliderPosition(0);
        horizontalSliderPlano->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(horizontalSliderPlano);

        slider_XY = new QLabel(groupBox);
        slider_XY->setObjectName(QString::fromUtf8("slider_XY"));

        horizontalLayout_14->addWidget(slider_XY);


        verticalLayout_6->addWidget(groupBox);

        verticalLayout_6->setStretch(0, 98);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 1);

        horizontalLayout_15->addLayout(verticalLayout_6);

        horizontalLayout_15->setStretch(0, 30);
        horizontalLayout_15->setStretch(1, 70);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 901, 21));
        menuFechar = new QMenu(menuBar);
        menuFechar->setObjectName(QString::fromUtf8("menuFechar"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFechar->menuAction());
        menuFechar->addAction(actionSalvar);
        menuFechar->addAction(actionSobre);
        menuFechar->addSeparator();
        menuFechar->addAction(actionFechar);
        mainToolBar->addAction(actionClose);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDimension);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionputVoxel);
        mainToolBar->addAction(actioncutVoxel);
        mainToolBar->addAction(actionputBox);
        mainToolBar->addAction(actioncutBox);
        mainToolBar->addAction(actionputSphere);
        mainToolBar->addAction(actioncutSphere);
        mainToolBar->addAction(actionputElipse);
        mainToolBar->addAction(actioncutElipse);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionplanXY);
        mainToolBar->addAction(actionplanYZ);
        mainToolBar->addAction(actionplanZX);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSobre_2);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_R, SIGNAL(valueChanged(int)), lcdNumber_R, SLOT(display(int)));
        QObject::connect(horizontalSlider_G, SIGNAL(valueChanged(int)), lcdNumber_G, SLOT(display(int)));
        QObject::connect(horizontalSlider_B, SIGNAL(valueChanged(int)), lcdNumber_B, SLOT(display(int)));
        QObject::connect(horizontalSlider_Raio, SIGNAL(valueChanged(int)), lcdNumber_Raio, SLOT(display(int)));
        QObject::connect(horizontalSlider_Ry, SIGNAL(valueChanged(int)), lcdNumber_Ry, SLOT(display(int)));
        QObject::connect(horizontalSlider_Rz, SIGNAL(valueChanged(int)), lcdNumber_Rz, SLOT(display(int)));
        QObject::connect(horizontalSlider_Dimx, SIGNAL(valueChanged(int)), lcdNumber_Dimx, SLOT(display(int)));
        QObject::connect(horizontalSlider_Dimy, SIGNAL(valueChanged(int)), lcdNumber_Dimy, SLOT(display(int)));
        QObject::connect(horizontalSlider_Dimz, SIGNAL(valueChanged(int)), lcdNumber_Dimz, SLOT(display(int)));
        QObject::connect(horizontalSlider_Rx, SIGNAL(valueChanged(int)), lcdNumber_Rx, SLOT(display(int)));
        QObject::connect(horizontalSlider_transparencia, SIGNAL(valueChanged(int)), lcdNumber_transparencia, SLOT(display(int)));
        QObject::connect(horizontalSliderPlano, SIGNAL(valueChanged(int)), slider_XY, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionputVoxel->setText(QApplication::translate("MainWindow", "putVoxel", nullptr));
#ifndef QT_NO_TOOLTIP
        actionputVoxel->setToolTip(QApplication::translate("MainWindow", "putVox", nullptr));
#endif // QT_NO_TOOLTIP
        actioncutVoxel->setText(QApplication::translate("MainWindow", "cutVoxel", nullptr));
        actionputBox->setText(QApplication::translate("MainWindow", "putBox", nullptr));
        actioncutBox->setText(QApplication::translate("MainWindow", "cutBox", nullptr));
        actionputSphere->setText(QApplication::translate("MainWindow", "putSphere", nullptr));
        actioncutSphere->setText(QApplication::translate("MainWindow", "cutSphere", nullptr));
        actionputElipse->setText(QApplication::translate("MainWindow", "putElipse", nullptr));
        actioncutElipse->setText(QApplication::translate("MainWindow", "cutElipse", nullptr));
        actionplanXY->setText(QApplication::translate("MainWindow", "planXY", nullptr));
        actionplanYZ->setText(QApplication::translate("MainWindow", "planYZ", nullptr));
        actionplanZX->setText(QApplication::translate("MainWindow", "planZX", nullptr));
        actionSobre_2->setText(QApplication::translate("MainWindow", "Sobre", nullptr));
        actionDimension->setText(QApplication::translate("MainWindow", "Dimension", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionFechar->setText(QApplication::translate("MainWindow", "Fechar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFechar->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSobre->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        Cores->setTitle(QApplication::translate("MainWindow", "COLOR", nullptr));
        color_R->setText(QApplication::translate("MainWindow", "R", nullptr));
        color_G->setText(QApplication::translate("MainWindow", "G", nullptr));
        color_B->setText(QApplication::translate("MainWindow", "B", nullptr));
        transparencia->setText(QApplication::translate("MainWindow", "A", nullptr));
        Sphere->setTitle(QApplication::translate("MainWindow", "SPHERE", nullptr));
        label->setText(QApplication::translate("MainWindow", "Raio", nullptr));
        Elipe->setTitle(QApplication::translate("MainWindow", "ELIPSE", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Rx", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Ry", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Rz", nullptr));
        Box->setTitle(QApplication::translate("MainWindow", "BOX", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Dim X", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Dim Y", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Dim Z", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "PLANO", nullptr));
        slider_XY->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menuFechar->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
