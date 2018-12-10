//
//  ring.hpp

#ifndef ring_hpp
#define ring_hpp
#include <iostream>
using namespace std;

template <typename T>
class ring{
    int m_pos;
    int m_size;
    T * m_values;
public:
    class iterator;

public:
    ring(int size): m_pos(0), m_size(size), m_values(NULL){
        m_values = new T[size];
    }
    ~ring() {
        delete [] m_values;
    }
    int size() {
        return m_size;
    }
    void add(T value){
        m_values[m_pos++] = value;

        if(m_pos == m_size){
            m_pos = 0;
        }
    }
    T& get(int pos){
        return m_values[pos];
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

/*
 EXERCISE
 -------------------------
 
 template <typename T>
 class ring{
 T* m_str;
 int m_size;
 int m_pos;
 public:
 class iterator;
 public:
 ring(int size) :m_str(NULL), m_size(size), m_pos(0){
 m_str = new string [size];
 }
 ~ring() {
 delete [] m_str;
 }
 void add(T str){
 m_str[m_pos++] = str;
 if(m_pos == m_size){
 m_pos = 0;
 }
 }
 int size() {
 return m_size;
 }
 T& get(int pos) {
 return m_str[pos];
 }
 };
 template <typename T>
 class ring<T>::iterator{
 public:
 void print() {
 cout << "iterator running" << endl;
 }
 };

*/
