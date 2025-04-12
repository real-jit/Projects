#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->replaceButton, &QPushButton::clicked, this, &MainWindow::onReplaceButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onReplaceButtonClicked()
{
    double x = ui->lineEditX->text().toDouble();
    double y = ui->lineEditY->text().toDouble();
    double z = ui->lineEditZ->text().toDouble();


    double maxVal = x;
    QString maxName = "X";

    if (y > maxVal) {
        maxVal = y;
        maxName = "Y";
    }

    if (z > maxVal) {
        maxVal = z;
        maxName = "Z";
    }

    double diff;

    if (maxName == "X") {
        diff = (y - z);
    } else if (maxName == "Y") {
        diff = (x - z);
    } else {
        diff = (x - y);
    }

    ui->resultLabel->setText(maxName + " = " + QString::number(diff));
}
