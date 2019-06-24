/********************************************************************************
** Form generated from reading UI file 'dialogsalve.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSALVE_H
#define UI_DIALOGSALVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSalve
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogSalve)
    {
        if (DialogSalve->objectName().isEmpty())
            DialogSalve->setObjectName(QString::fromUtf8("DialogSalve"));
        DialogSalve->resize(156, 99);
        verticalLayout_2 = new QVBoxLayout(DialogSalve);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DialogSalve);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(DialogSalve);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DialogSalve);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogSalve, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogSalve);
    } // setupUi

    void retranslateUi(QDialog *DialogSalve)
    {
        DialogSalve->setWindowTitle(QApplication::translate("DialogSalve", "Dialog", nullptr));
        label->setText(QApplication::translate("DialogSalve", "SALVO", nullptr));
        pushButton->setText(QApplication::translate("DialogSalve", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSalve: public Ui_DialogSalve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSALVE_H
