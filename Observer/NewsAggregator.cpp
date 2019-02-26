#include "NewsAggregator.h"
#include <algorithm>

void NewsAggregator::registerObserver(IObserver *observer) {
     observers.push_back(observer);
}

void NewsAggregator::removeObserver(IObserver *observer) {
     for(vector<IObserver*>::iterator it = observers.begin() ; it != observers.end() ; it++)
          if(*it == observer) {
                 observers.erase(it);
                 break;
          }
}

void NewsAggregator::notifyObservers() {
     for(vector<IObserver*>::iterator it = observers.begin(); it < observers.end(); it++)
              ((IObserver*)*it)->Update("Hello");
}
