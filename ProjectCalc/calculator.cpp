#include "calculator.h"
#include "./ui_calculator.h"
#include <QString>
#include <cmath>


calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::calculate(QString sgn)
{
    if (ui->lineEdit->text().isEmpty()) return;

    QString input = ui->lineEdit->text();
    stack.push(input);
    ui->lineEdit->clear();

    if (stack.size() >= 3) {
        double val2 = stack.pop().toDouble();
        QString op = stack.pop();
        double val1 = stack.pop().toDouble();

        double result = 0;
        if (op == "+") result = val1 + val2;
        else if (op == "-") result = val1 - val2;
        else if (op == "*") result = val1 * val2;
        else if (op == "/") {
            if (val2 == 0) {
                stack.push(QString::number(val1));
                stack.push(op);
                ui->lineEdit->clear();
                return;
            }
            result = val1 / val2;
        }

        stack.push(QString::number(result));
        ui->lineEdit->setText(stack.top());
    }

    if (sgn != "=") {
        stack.push(sgn);
        ui->lineEdit_2->setText(sgn);
    }

    ui->lineEdit_2->setText(stack.toList().join(" "));
}

void calculator::on_Button1_clicked()
{
    ui->lineEdit->insert("1");
}

void calculator::on_Button2_clicked()
{
    ui->lineEdit->insert("2");
}

void calculator::on_Button3_clicked()
{
    ui->lineEdit->insert("3");
}

void calculator::on_Button4_clicked()
{
    ui->lineEdit->insert("4");
}

void calculator::on_Button5_clicked()
{
    ui->lineEdit->insert("5");
}

void calculator::on_Button6_clicked()
{
    ui->lineEdit->insert("6");
}

void calculator::on_Button7_clicked()
{
    ui->lineEdit->insert("7");
}

void calculator::on_Button8_clicked()
{
    ui->lineEdit->insert("8");
}

void calculator::on_Button9_clicked()
{
    ui->lineEdit->insert("9");
}

void calculator::on_Button0_clicked()
{
    ui->lineEdit->insert("0");
}

void calculator::on_pointButton_clicked()
{
    if (ui->lineEdit->text().length() == 0 ||
        ui->lineEdit->text().at(ui->lineEdit->text().length()-1) == '-' ||
        ui->lineEdit->text().indexOf('.') != -1) return;
    ui->lineEdit->setText(ui->lineEdit->text()+'.');
}

void calculator::on_plusButton_clicked()
{
    calculate("+");
}

void calculator::on_minusButton_clicked()
{
    calculate("-");
}

void calculator::on_divButton_clicked()
{
    calculate("/");
}
void calculator::on_multButton_clicked()
{
    calculate("*");
}

void calculator::on_clearButton_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    stack.clear();
}

void calculator::on_signButton_clicked()
{
    if (ui->lineEdit->text().length() == 0 || ui->lineEdit->text().at(0) != '-')
        ui->lineEdit->setText("-"+ui->lineEdit->text());
    else
        ui->lineEdit->setText(ui->lineEdit->text().remove(0,1));
}


void calculator::on_equallyButton_clicked()
{
    calculate("=");
}


void calculator::on_msButton_clicked()
{
    memory = ui->lineEdit->text().toDouble();
}

void calculator::on_mrButton_clicked()
{
    ui->lineEdit->setText(QString::number(memory));
}

void calculator::on_mcButton_clicked()
{
    memory = 0;
}

void calculator::on_mpButton_clicked()
{
    memory += ui->lineEdit->text().toDouble();
}

void calculator::on_mmButton_clicked()
{
    memory -= ui->lineEdit->text().toDouble();
}


void calculator::on_cosButton_clicked()
{
    double value = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(QString::number(cos(value)));
}

void calculator::on_logButton_clicked()
{
    double value = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(QString::number(log10(value)));

    if (value < 0) {
        ui->lineEdit->setText("Error");
        return; }
}


void calculator::on_sqrtButton_clicked()
{
    double value = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(QString::number(sqrt(value)));

    if (value < 0) {
        ui->lineEdit->setText("Error");
        return;
    }
}


void calculator::on_powButton_clicked()
{
    double value = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(QString::number(value * value));
}

