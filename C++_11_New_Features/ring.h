
#ifndef RING_H_
#define RING_H_
#include <iostream>

template<class T>

class ring{
    public:
    class iterator;
};

template<class T>
class ring<T>::iterator{
public:
    void print(){
    std::cout << "iterator speaking"<<T() << std::endl;
    }
};

#endif /* RING_H_*/
