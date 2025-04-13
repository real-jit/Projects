#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QStack>
#include <QString>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_Button1_clicked();
    void on_Button2_clicked();
    void on_Button3_clicked();
    void on_Button4_clicked();
    void on_Button5_clicked();
    void on_Button6_clicked();
    void on_Button7_clicked();
    void on_Button8_clicked();
    void on_Button9_clicked();
    void on_Button0_clicked();
    void on_pointButton_clicked();
    void on_plusButton_clicked();
    void on_minusButton_clicked();
    void on_divButton_clicked();
    void on_multButton_clicked();

    void on_clearButton_clicked();

    void on_signButton_clicked();

    void on_equallyButton_clicked();

    void on_msButton_clicked();

    void on_mrButton_clicked();

    void on_mcButton_clicked();

    void on_mpButton_clicked();

    void on_mmButton_clicked();

    void on_cosButton_clicked();

    void on_logButton_clicked();

    void on_sqrtButton_clicked();

    void on_powButton_clicked();

private:
    Ui::calculator *ui;
    QStack<QString> stack;
    void calculate(QString sgn);
    double memory = 0;
};



#endif // CALCULATOR_H
