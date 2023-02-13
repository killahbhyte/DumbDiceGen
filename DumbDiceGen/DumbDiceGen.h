#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DumbDiceGen.h"
#include "DieGen.h"

class DumbDiceGen : public QMainWindow
{
    Q_OBJECT

public:
    DumbDiceGen(QWidget *parent = nullptr);
    ~DumbDiceGen();

private:
    Ui::DumbDiceGenClass ui;

public slots:
    void on_pushButton_roll_clicked();
};

