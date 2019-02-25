#ifndef ZIPCOMPRESSION_H
#define ZIPCOMPRESSION_H

#include "icompression.h"

// Using Singleton pattern
class ZipCompression: public ICompression
{
public:
    static ZipCompression& Instance();
    void compress();
private:
    ZipCompression() {}
    ZipCompression(const ZipCompression&) = delete;
    ZipCompression& operator=(const ZipCompression&) = delete;
};

#endif // ZIPCOMPRESSION_H
