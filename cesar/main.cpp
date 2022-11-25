#include "cesar.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cesar w;
    w.show();
    return a.exec();
}
