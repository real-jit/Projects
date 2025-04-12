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

    double minVal = x;
    QString minName = "X";

    if (y < minVal) {
        minVal = y;
        minName = "Y";
    }

    if (z < minVal) {
        minVal = z;
        minName = "Z";
    }

    double sum = x + y + z - minVal;

    ui->resultLabel->setText(minName + " = " + QString::number(sum));
}
