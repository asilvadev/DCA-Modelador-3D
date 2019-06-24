/********************************************************************************
** Form generated from reading UI file 'dialogmatriz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMATRIZ_H
#define UI_DIALOGMATRIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogMatriz
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_dX;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpinBox *spinBox_dX;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpinBox *spinBox_dY;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox_dZ;
    QSpacerItem *horizontalSpacer_10;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogMatriz)
    {
        if (DialogMatriz->objectName().isEmpty())
            DialogMatriz->setObjectName(QString::fromUtf8("DialogMatriz"));
        DialogMatriz->resize(176, 157);
        DialogMatriz->setSizeGripEnabled(false);
        DialogMatriz->setModal(false);
        verticalLayout_3 = new QVBoxLayout(DialogMatriz);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        label = new QLabel(DialogMatriz);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer_6 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_dX = new QHBoxLayout();
        horizontalLayout_dX->setObjectName(QString::fromUtf8("horizontalLayout_dX"));
        horizontalSpacer_4 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_dX->addItem(horizontalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(DialogMatriz);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        spinBox_dX = new QSpinBox(DialogMatriz);
        spinBox_dX->setObjectName(QString::fromUtf8("spinBox_dX"));

        horizontalLayout->addWidget(spinBox_dX);


        horizontalLayout_dX->addLayout(horizontalLayout);

        horizontalSpacer_8 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_dX->addItem(horizontalSpacer_8);

        horizontalLayout_dX->setStretch(0, 40);
        horizontalLayout_dX->setStretch(1, 20);
        horizontalLayout_dX->setStretch(2, 40);

        verticalLayout->addLayout(horizontalLayout_dX);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(DialogMatriz);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        spinBox_dY = new QSpinBox(DialogMatriz);
        spinBox_dY->setObjectName(QString::fromUtf8("spinBox_dY"));

        horizontalLayout_2->addWidget(spinBox_dY);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalSpacer_9 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        horizontalLayout_5->setStretch(0, 40);
        horizontalLayout_5->setStretch(1, 20);
        horizontalLayout_5->setStretch(2, 40);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(DialogMatriz);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        spinBox_dZ = new QSpinBox(DialogMatriz);
        spinBox_dZ->setObjectName(QString::fromUtf8("spinBox_dZ"));

        horizontalLayout_3->addWidget(spinBox_dZ);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_10 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        horizontalLayout_4->setStretch(0, 40);
        horizontalLayout_4->setStretch(1, 20);
        horizontalLayout_4->setStretch(2, 40);

        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(DialogMatriz);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(DialogMatriz);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogMatriz, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogMatriz, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogMatriz);
    } // setupUi

    void retranslateUi(QDialog *DialogMatriz)
    {
        DialogMatriz->setWindowTitle(QApplication::translate("DialogMatriz", "Dialog", nullptr));
        label->setText(QApplication::translate("DialogMatriz", "DIMENS\303\225ES DA MATRIZ", nullptr));
        label_5->setText(QApplication::translate("DialogMatriz", "Dim X", nullptr));
        label_6->setText(QApplication::translate("DialogMatriz", "Dim Y", nullptr));
        label_4->setText(QApplication::translate("DialogMatriz", "Dim Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMatriz: public Ui_DialogMatriz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMATRIZ_H
