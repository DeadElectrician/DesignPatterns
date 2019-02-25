#include "rarcompression.h"
#include <iostream>
using namespace std;

RarCompression& RarCompression::Instance()
{
    static RarCompression theRarCompression;
    return theRarCompression;
}

void RarCompression::compress()
{
    cout<<"I'm a RarCompression"<<endl;
}
