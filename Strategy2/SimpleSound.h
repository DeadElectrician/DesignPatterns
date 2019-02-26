#ifndef SIMPLESOUND
#define SIMPLESOUND

#include <iostream>
#include "ISoundable.h"
using namespace std;

class SimpleSound: public ISoundable {
public:
	void sound();
};


#endif
