#include <QCoreApplication>
#include "NewsAggregator.h"
#include "smsNotifier.h"
#include "callNotifier.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    NewsAggregator aggregator;
    smsNotifier *notSMS = new smsNotifier();
    aggregator.registerObserver(notSMS);
    callNotifier *notCall = new callNotifier();
    aggregator.registerObserver(notCall);
    //aggregator.removeObserver(notSMS);
    aggregator.notifyObservers();
    return a.exec();
}
