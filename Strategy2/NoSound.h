#ifndef NOSOUND
#define NOSOUND

#include <iostream>
#include "ISoundable.h"
using namespace std;

class NoSound: public ISoundable {
public:
    void sound() {}
};


#endif
