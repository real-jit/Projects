#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSet>
#include <QTextCursor>
#include <utility>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->generateButton, &QPushButton::clicked, this, &MainWindow::onGenerateClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

void MainWindow::onGenerateClicked()
{
    int from = ui->spinBoxFrom->value();
    int to = ui->spinBoxTo->value();

    QSet<int> multiplesOf3;
    QSet<int> primes;
    QSet<int> composites;

    for (int i = from; i <= to; ++i) {
        if (i % 3 == 0) multiplesOf3.insert(i);
        if (isPrime(i)) primes.insert(i);
        else if (i > 1) composites.insert(i);
    }

    auto fillTextEdit = [](QTextEdit* edit, const QSet<int>& numbers) {
        edit->clear();
        QList<int> sortedNumbers = numbers.values();
        std::sort(sortedNumbers.begin(), sortedNumbers.end());

        QString text;
        for (int num : std::as_const(sortedNumbers))
            text += QString::number(num) + " ";
        edit->setPlainText(text.trimmed());
    };

    fillTextEdit(ui->textEdit2, multiplesOf3);
    fillTextEdit(ui->textEdit3, primes);
    fillTextEdit(ui->textEdit1, composites);
}
