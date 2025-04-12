/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSpinBox *spinBoxFrom;
    QSpinBox *spinBoxTo;
    QTextEdit *textEdit2;
    QTextEdit *textEdit3;
    QTextEdit *textEdit1;
    QPushButton *generateButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        spinBoxFrom = new QSpinBox(centralwidget);
        spinBoxFrom->setObjectName("spinBoxFrom");
        spinBoxFrom->setGeometry(QRect(310, 170, 51, 21));
        spinBoxFrom->setMinimum(1);
        spinBoxFrom->setMaximum(100);
        spinBoxTo = new QSpinBox(centralwidget);
        spinBoxTo->setObjectName("spinBoxTo");
        spinBoxTo->setGeometry(QRect(410, 170, 51, 22));
        spinBoxTo->setMinimum(1);
        spinBoxTo->setMaximum(100);
        textEdit2 = new QTextEdit(centralwidget);
        textEdit2->setObjectName("textEdit2");
        textEdit2->setGeometry(QRect(160, 250, 131, 141));
        textEdit3 = new QTextEdit(centralwidget);
        textEdit3->setObjectName("textEdit3");
        textEdit3->setGeometry(QRect(480, 250, 131, 141));
        textEdit1 = new QTextEdit(centralwidget);
        textEdit1->setObjectName("textEdit1");
        textEdit1->setGeometry(QRect(320, 250, 131, 141));
        generateButton = new QPushButton(centralwidget);
        generateButton->setObjectName("generateButton");
        generateButton->setGeometry(QRect(320, 420, 131, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 220, 71, 20));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 220, 91, 20));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(490, 220, 121, 20));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 150, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 150, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\202\320\275\321\213\320\265 3:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\321\213\320\265 \321\207\320\270\321\201\320\273\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\260\320\262\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
