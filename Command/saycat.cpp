#include "saycat.h"
#include <iostream>
using namespace std;

SayCat::SayCat() {}

void SayCat::Execute() {
    cout<<"Meow meow meow"<<endl;
    if(!str.empty())
        cout<<str<<endl;
}

void SayCat::setStr(string str) {
    this->str = str;
}
