#ifndef ICOMPRESSION_H
#define ICOMPRESSION_H


class ICompression
{
public:
    virtual ~ICompression() {}
    virtual void compress() = 0;
};

#endif // ICOMPRESSION_H
