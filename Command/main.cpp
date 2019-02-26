#include <QCoreApplication>
#include "sounder.h"
#include "saydog.h"
#include "saycat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Sounder sounder;
    SayDog *dog = new SayDog();
    sounder.makeSound(dog);
    delete dog;
    SayCat *cat = new SayCat();
    //cat->setStr("Purr purr...");
    sounder.makeSound(cat);
    delete cat;
    return a.exec();
}
