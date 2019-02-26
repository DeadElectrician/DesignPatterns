#include "sounder.h"
#include <iostream>
using namespace std;

void Sounder::makeSound(ICommand *command) {
    cout<<"Now I make a sound..."<<endl;
    command->Execute();
    cout<<"---"<<endl;
}
