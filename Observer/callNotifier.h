#ifndef CALLNOTIFIER
#define CALLNOTIFIER

#include "IObserver.h"
using namespace std;

class callNotifier: public IObserver {
public:
    void Update(string str);
};

#endif
