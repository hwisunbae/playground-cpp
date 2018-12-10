//
//  ring.hpp

#ifndef ring_hpp
#define ring_hpp
#include <iostream>
using namespace std;
template <typename T>
class ring{
    T str;
public:
    class iterator;
    
    ring(int num){
        str[num];
    }
    void add(T& newStr){
        str = newStr;
    }
    T get(){
        return str;
    }
};

template <typename T>
class ring<T>::iterator {
public:
    void print(){
        cout << "Hello from iterator" << T() << endl;
    }
};
#endif /* ring_hpp */
