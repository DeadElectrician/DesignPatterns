#ifndef SAYDOG_H
#define SAYDOG_H

#include "icommand.h"

class SayDog: public ICommand {
public:
    SayDog();
    void Execute();
};

#endif // SAYDOG_H
