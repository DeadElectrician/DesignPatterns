#ifndef RARCOMPRESSION_H
#define RARCOMPRESSION_H

#include "icompression.h"

// Using Singleton pattern
class RarCompression : public ICompression
{
public:
    static RarCompression& Instance();
    void compress();
private:
    RarCompression() {}
    RarCompression(const RarCompression&) = delete;
    RarCompression& operator=(const RarCompression&) = delete;
};

#endif // RARCOMPRESSION_H
