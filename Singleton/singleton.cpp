#include "singleton.h"
#include <iostream>

using namespace std;

Singleton::Singleton() : val(0) {
    cout<<"This is a constructor of Singleton"<<endl;
}

void Singleton::showVal() {
    cout<<"val = "<<val<<endl;
}

void Singleton::increaseVal() {
    val++;
}

Singleton& Singleton::getInstance() {
    static Singleton sharedSingleton;
    return sharedSingleton;
}
