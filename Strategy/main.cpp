#include <QCoreApplication>
#include "compressor.h"
#include "rarcompression.h"
#include "zipcompression.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Compressor compressorRar(RarCompression::Instance());
    compressorRar.compress();
    Compressor compressorZip(ZipCompression::Instance());
    compressorZip.compress();
    return a.exec();
}
