#include "DumbDiceGen.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DumbDiceGen w;
    w.show();
    return a.exec();
}
