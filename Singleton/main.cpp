#include <QCoreApplication>
#include "singleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Singleton &obj1 = Singleton::getInstance();
    obj1.increaseVal();
    obj1.showVal();
    Singleton &obj2 = Singleton::getInstance();
    obj2.increaseVal();
    obj2.showVal();
    Singleton &obj3 = Singleton::getInstance();
    obj3.increaseVal();
    obj3.showVal();
    return a.exec();
}
