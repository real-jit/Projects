#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->processButton, &QPushButton::clicked, this, &MainWindow::onProcessButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onProcessButtonClicked()
{
    int A = ui->lineEditA->text().toInt();
    int B = ui->lineEditB->text().toInt();

    if (A != B) {
        int sum = A + B;
        A = sum;
        B = sum;
    } else {
        A = 0;
        B = 0;
    }

    ui->resultLabel->setText(QString("A = %1, B = %2").arg(A).arg(B));
}
