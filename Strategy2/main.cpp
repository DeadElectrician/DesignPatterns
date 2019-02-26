#include <QCoreApplication>
#include <iostream>
#include <list>
#include "VillageCat.h"
#include "DeadCat.h"
using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    list<Cat *> List;
    List.push_back(new VillageCat());
    List.push_back(new DeadCat());
    for(list<Cat *>::iterator it = List.begin(); it != List.end(); it++) {
        (*it)->display();
        (*it)->sound();
        cout<<"---"<<endl;
    }
    return a.exec();
}
