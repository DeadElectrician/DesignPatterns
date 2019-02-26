#ifndef IOBSERVER
#define IOBSERVER
#include <string>
#include <iostream>
using namespace std;

class IObserver {
public:
      virtual void Update(string str) = 0;
};

#endif

