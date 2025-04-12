#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->processButton, &QPushButton::clicked, this, &MainWindow::onProcessClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onProcessClicked()
{
    double x = ui->lineEditX->text().toDouble();
    double y = ui->lineEditY->text().toDouble();
    double z = ui->lineEditZ->text().toDouble();

    if (x > y && y > z) {
        x *= 2;
        y *= 2;
        z *= 2;
    } else {
        x = -x;
        y = -y;
        z = -z;
    }

    ui->lineEditX->setText(QString::number(x));
    ui->lineEditY->setText(QString::number(y));
    ui->lineEditZ->setText(QString::number(z));
}
