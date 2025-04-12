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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditX;
    QLineEdit *lineEditY;
    QLineEdit *lineEditZ;
    QLabel *resultLabel;
    QPushButton *replaceButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(300, 190, 171, 132));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditX = new QLineEdit(layoutWidget);
        lineEditX->setObjectName("lineEditX");

        verticalLayout->addWidget(lineEditX);

        lineEditY = new QLineEdit(layoutWidget);
        lineEditY->setObjectName("lineEditY");

        verticalLayout->addWidget(lineEditY);

        lineEditZ = new QLineEdit(layoutWidget);
        lineEditZ->setObjectName("lineEditZ");

        verticalLayout->addWidget(lineEditZ);

        resultLabel = new QLabel(layoutWidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(resultLabel);

        replaceButton = new QPushButton(layoutWidget);
        replaceButton->setObjectName("replaceButton");

        verticalLayout->addWidget(replaceButton);

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
        resultLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        replaceButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\260\320\270\320\274\320\265\320\275\321\214\321\210\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
