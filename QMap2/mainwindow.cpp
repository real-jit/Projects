#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMap>
#include <QDebug>

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
    QMap<QString, QString> book1, book2;

    static int counter = 0;
    counter++;

    book1["Иванов_" + QString::number(counter)] = "111-111";
    book1["Петров_" + QString::number(counter)] = "222-222";

    book2["Сидоров_" + QString::number(counter)] = "333-333";
    book2["Козлов_" + QString::number(counter)] = "444-444";

    QString result = "Нажатие #" + QString::number(counter) + " \n";
    result += "Книга 1:\n";
    for (auto it = book1.begin(); it != book1.end(); ++it) {
        result += it.key() + ": " + it.value() + "\n";
    }

    result += "Книга 2:\n";
    for (auto it = book2.begin(); it != book2.end(); ++it) {
        result += it.key() + ": " + it.value() + "\n";
    }

    ui->textEdit->append(result);
}
