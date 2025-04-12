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
    double a = ui->lineEdit1->text().toDouble();
    double b = ui->lineEdit2->text().toDouble();
    double c = ui->lineEdit3->text().toDouble();

    double min = qMin(qMin(a, b), c);
    double max = qMax(qMax(a, b), c);

    ui->lineEdit3->setText(QString::number(max - min));
}
