#include "Cat.h"
#include "SimpleSound.h"

Cat::Cat() {
	behaviorSound = new SimpleSound();
}

Cat::~Cat() {
    delete behaviorSound;
}

void Cat::sound() {
    behaviorSound->sound();
}
