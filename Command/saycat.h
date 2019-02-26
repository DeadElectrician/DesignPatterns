#ifndef SAYCAT_H
#define SAYCAT_H

#include "icommand.h"
#include <string>

class SayCat: public ICommand {
private:
    std::string str;
public:
    SayCat();
    void Execute();
    void setStr(std::string str);
};

#endif // SAYCAT_H
