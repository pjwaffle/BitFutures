#include <QtGui/QApplication>
#include "hammer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hammer w;
    w.show();

    return a.exec();
}
