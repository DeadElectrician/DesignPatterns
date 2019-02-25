#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include "icompression.h"

class Compressor
{
public:
    Compressor(ICompression &newCompressionBehaviour) : compressionBehaviour(newCompressionBehaviour){}
    void compress();
private:
    ICompression &compressionBehaviour;
};

#endif // COMPRESSOR_H
