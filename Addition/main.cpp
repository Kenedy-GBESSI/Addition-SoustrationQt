#include "addiction.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Addiction w;
    w.show();
    return a.exec();
}
