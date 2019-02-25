#include "zipcompression.h"
#include <iostream>
using namespace std;

ZipCompression& ZipCompression::Instance()
{
    static ZipCompression theZipCompression;
    return theZipCompression;
}

void ZipCompression::compress()
{
    cout<<"I'm a ZipCompression"<<endl;
}
