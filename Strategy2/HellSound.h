#ifndef HELLSOUND
#define HELLSOUND

#include <iostream>
#include "ISoundable.h"
using namespace std;

class HellSound: public ISoundable {
public:
	void sound();
};


#endif
