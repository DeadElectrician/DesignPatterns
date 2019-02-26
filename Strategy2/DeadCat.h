#ifndef DEADCAT
#define DEADCAT

#include <iostream>
#include "Cat.h"
using namespace std;

class DeadCat : public Cat
{
public:
    DeadCat();
	void display();
};

#endif

