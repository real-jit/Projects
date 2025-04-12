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

    double maxVal;
    double minVal;

    if (x > y) {
        maxVal = x;
        minVal = y;
    }
    else {
        maxVal = y;
        minVal = x;
    }

    ui->lineEditX->setText(QString::number(minVal));
    ui->lineEditY->setText(QString::number(maxVal));
}
