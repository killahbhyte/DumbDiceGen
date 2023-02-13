#include "DumbDiceGen.h"

DumbDiceGen::DumbDiceGen(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

DumbDiceGen::~DumbDiceGen()
{}

void DumbDiceGen::on_pushButton_roll_clicked()
{
    
    QString str_diceAmount = ui.lineEdit_numDice->text();
    int diceAmount = str_diceAmount.toInt();
    QString str_diceType = ui.lineEdit_diceType->text();
    int diceType = str_diceType.toInt();
    QString str_bonus = ui.lineEdit_bonus->text();
    int bonus = str_bonus.toInt();

    DieGen dieRoller(diceType);
    int result{ 0 };

    // Loop through rolls
    while (diceAmount > 0) {
        result += dieRoller.rollDie();
        --diceAmount;
    }
    result += bonus;

    QString rollResult = QString::number(result);

    ui.label_resultNum->setText(rollResult);

}
