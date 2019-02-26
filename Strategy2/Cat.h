#ifndef CAT
#define CAT

#include <iostream>
#include "ISoundable.h"
#include "SimpleSound.h"
#include "NoSound.h"
#include "HellSound.h"
using namespace std;

class Cat {
protected:
    ISoundable *behaviorSound;
public:
	Cat();
    virtual ~Cat();
	virtual void display() = 0;
	void sound();
};

#endif
