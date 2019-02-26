#ifndef NEWSAGGREGATOR
#define NEWSAGGREGATOR
#include "ISubject.h"
#include <vector>
using namespace std;

class NewsAggregator : public ISubject {
private:
      vector<IObserver*> observers;
public:
      void registerObserver(IObserver* observer);
      void removeObserver(IObserver* observer);
      void notifyObservers();
};

#endif

