/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Button4;
    QPushButton *Button7;
    QPushButton *Button6;
    QPushButton *plusButton;
    QPushButton *Button5;
    QPushButton *signButton;
    QPushButton *pointButton;
    QPushButton *clearButton;
    QPushButton *Button9;
    QPushButton *divButton;
    QLineEdit *lineEdit;
    QPushButton *multButton;
    QPushButton *equallyButton;
    QLineEdit *lineEdit_2;
    QPushButton *Button8;
    QPushButton *minusButton;
    QPushButton *Button3;
    QPushButton *msButton;
    QPushButton *mrButton;
    QPushButton *mcButton;
    QPushButton *mpButton;
    QPushButton *mmButton;
    QPushButton *cosButton;
    QPushButton *sqrtButton;
    QPushButton *powButton;
    QPushButton *logButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(800, 600);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName("centralwidget");
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        Button1->setGeometry(QRect(260, 260, 40, 35));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        Button2->setGeometry(QRect(310, 260, 40, 35));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        Button0->setGeometry(QRect(260, 380, 91, 35));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        Button4->setGeometry(QRect(260, 300, 40, 35));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        Button7->setGeometry(QRect(260, 340, 40, 35));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        Button6->setGeometry(QRect(360, 300, 40, 35));
        plusButton = new QPushButton(centralwidget);
        plusButton->setObjectName("plusButton");
        plusButton->setGeometry(QRect(410, 260, 40, 35));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        Button5->setGeometry(QRect(310, 300, 40, 35));
        signButton = new QPushButton(centralwidget);
        signButton->setObjectName("signButton");
        signButton->setGeometry(QRect(410, 340, 40, 35));
        pointButton = new QPushButton(centralwidget);
        pointButton->setObjectName("pointButton");
        pointButton->setGeometry(QRect(360, 380, 40, 35));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(410, 380, 40, 35));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        Button9->setGeometry(QRect(360, 340, 40, 35));
        divButton = new QPushButton(centralwidget);
        divButton->setObjectName("divButton");
        divButton->setGeometry(QRect(460, 300, 40, 35));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(210, 170, 291, 41));
        QFont font;
        font.setPointSize(16);
        lineEdit->setFont(font);
        lineEdit->setMaxLength(10);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        multButton = new QPushButton(centralwidget);
        multButton->setObjectName("multButton");
        multButton->setGeometry(QRect(410, 300, 40, 35));
        equallyButton = new QPushButton(centralwidget);
        equallyButton->setObjectName("equallyButton");
        equallyButton->setGeometry(QRect(460, 340, 40, 74));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(210, 140, 291, 31));
        lineEdit_2->setFont(font);
        lineEdit_2->setMaxLength(10);
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        Button8->setGeometry(QRect(310, 340, 40, 35));
        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName("minusButton");
        minusButton->setGeometry(QRect(460, 260, 40, 35));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        Button3->setGeometry(QRect(360, 260, 40, 35));
        msButton = new QPushButton(centralwidget);
        msButton->setObjectName("msButton");
        msButton->setGeometry(QRect(210, 220, 51, 35));
        mrButton = new QPushButton(centralwidget);
        mrButton->setObjectName("mrButton");
        mrButton->setGeometry(QRect(270, 220, 51, 35));
        mcButton = new QPushButton(centralwidget);
        mcButton->setObjectName("mcButton");
        mcButton->setGeometry(QRect(330, 220, 51, 35));
        mpButton = new QPushButton(centralwidget);
        mpButton->setObjectName("mpButton");
        mpButton->setGeometry(QRect(390, 220, 51, 35));
        mmButton = new QPushButton(centralwidget);
        mmButton->setObjectName("mmButton");
        mmButton->setGeometry(QRect(450, 220, 51, 35));
        cosButton = new QPushButton(centralwidget);
        cosButton->setObjectName("cosButton");
        cosButton->setGeometry(QRect(210, 260, 40, 35));
        sqrtButton = new QPushButton(centralwidget);
        sqrtButton->setObjectName("sqrtButton");
        sqrtButton->setGeometry(QRect(210, 340, 40, 35));
        powButton = new QPushButton(centralwidget);
        powButton->setObjectName("powButton");
        powButton->setGeometry(QRect(210, 380, 40, 35));
        logButton = new QPushButton(centralwidget);
        logButton->setObjectName("logButton");
        logButton->setGeometry(QRect(210, 300, 40, 35));
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName("statusbar");
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        Button1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        Button2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        Button0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        Button4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        Button7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        Button6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        plusButton->setText(QCoreApplication::translate("calculator", "+", nullptr));
        Button5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        signButton->setText(QCoreApplication::translate("calculator", "+/-", nullptr));
        pointButton->setText(QCoreApplication::translate("calculator", ".", nullptr));
        clearButton->setText(QCoreApplication::translate("calculator", "C", nullptr));
        Button9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        divButton->setText(QCoreApplication::translate("calculator", "/", nullptr));
        multButton->setText(QCoreApplication::translate("calculator", "*", nullptr));
        equallyButton->setText(QCoreApplication::translate("calculator", "=", nullptr));
        Button8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        minusButton->setText(QCoreApplication::translate("calculator", "-", nullptr));
        Button3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        msButton->setText(QCoreApplication::translate("calculator", "MS", nullptr));
        mrButton->setText(QCoreApplication::translate("calculator", "MR", nullptr));
        mcButton->setText(QCoreApplication::translate("calculator", "MC", nullptr));
        mpButton->setText(QCoreApplication::translate("calculator", "M+", nullptr));
        mmButton->setText(QCoreApplication::translate("calculator", "M-", nullptr));
        cosButton->setText(QCoreApplication::translate("calculator", "cos", nullptr));
        sqrtButton->setText(QCoreApplication::translate("calculator", "\342\210\232", nullptr));
        powButton->setText(QCoreApplication::translate("calculator", "x\302\262", nullptr));
        logButton->setText(QCoreApplication::translate("calculator", "log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
