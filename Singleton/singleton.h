#ifndef SINGLETON_H
#define SINGLETON_H

// Advanced Meyer’s Singleton
class Singleton
{
public:
    static Singleton& getInstance();
    void showVal();
    void increaseVal();
private:
    int val;
    Singleton();
    Singleton(const Singleton& root) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

#endif // SINGLETON_H
