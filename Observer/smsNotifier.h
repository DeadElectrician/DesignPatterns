#ifndef SMSNOTIFIER
#define SMSNOTIFIER

#include "IObserver.h"
using namespace std;

class smsNotifier: public IObserver {
public:
    void Update(string str);
};

#endif
