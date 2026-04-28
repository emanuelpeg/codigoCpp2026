/********************************************************************************
** Form generated from reading UI file 'cronometro.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRONOMETRO_H
#define UI_CRONOMETRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cronometro
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cronometro)
    {
        if (Cronometro->objectName().isEmpty())
            Cronometro->setObjectName("Cronometro");
        Cronometro->resize(800, 383);
        centralwidget = new QWidget(Cronometro);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        QFont font;
        font.setPointSize(36);
        lcdNumber->setFont(font);

        verticalLayout->addWidget(lcdNumber);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 20, 221, 31));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 20, 21, 21));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(280, 20, 201, 28));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(520, 20, 79, 21));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 60, 105, 30));

        verticalLayout->addWidget(frame_2);

        Cronometro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cronometro);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Cronometro->setMenuBar(menubar);
        statusbar = new QStatusBar(Cronometro);
        statusbar->setObjectName("statusbar");
        Cronometro->setStatusBar(statusbar);

        retranslateUi(Cronometro);

        QMetaObject::connectSlotsByName(Cronometro);
    } // setupUi

    void retranslateUi(QMainWindow *Cronometro)
    {
        Cronometro->setWindowTitle(QCoreApplication::translate("Cronometro", "Cronometro", nullptr));
        pushButton->setText(QCoreApplication::translate("Cronometro", "Play", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cronometro", "Reset", nullptr));
        label->setText(QCoreApplication::translate("Cronometro", "+", nullptr));
        label_2->setText(QCoreApplication::translate("Cronometro", "=", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Cronometro", "sumar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cronometro: public Ui_Cronometro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRONOMETRO_H
