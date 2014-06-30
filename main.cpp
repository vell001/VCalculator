#include <QtGui/QApplication>
#include "add.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    add w;
    w.show();
    
    return a.exec();
}
