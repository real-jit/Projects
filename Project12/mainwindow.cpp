#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <algorithm>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->sortButton, &QPushButton::clicked, this, &MainWindow::onSortButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onSortButtonClicked()
{
    double x = ui->lineEditX->text().toDouble();
    double y = ui->lineEditY->text().toDouble();
    double z = ui->lineEditZ->text().toDouble();

    if (x < y) std::swap(x, y);
    if (y < z) std::swap(y, z);
    if (x < y) std::swap(x, y);

    ui->lineEditX->setText(QString::number(x));
    ui->lineEditY->setText(QString::number(y));
    ui->lineEditZ->setText(QString::number(z));
}
