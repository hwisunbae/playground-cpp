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
    iterator begin() {
        return iterator(0, *this);
    }
    iterator end() {
        return iterator(m_size, *this);
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
    int m_pos;
    ring & m_ring;
public:
    void print(){
        cout << "Hello from iterator" << T() << endl;
    }
    iterator(int pos, ring& obj):m_pos(pos), m_ring(obj){
        
    }
    iterator& operator++(int){
        m_pos++;
        
        return *this;
    }
    iterator& operator++(){
        m_pos++;
        
        return *this;
    }
    T& operator*() {
        return m_ring.get(m_pos);
    }
    bool operator!=(const iterator& obj) const{
        return m_pos != obj.m_pos;
    }
};



#endif

/*
 EXERCISE
 -------------------------
template <typename T>
class ring {
    T * m_str;
    int m_pos;
    int m_size;
public:
    class iterator;
public:
    ring(int size): m_str(NULL), m_pos(0), m_size(size){
        m_str = new T [size];
    }
    ~ring() {
        delete [] m_str;
    }
    iterator begin() {
        return iterator(0, *this);
    }
    iterator end(){
        return iterator(m_size, *this);
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
    T& get(int pos){
        return m_str[pos];
    }
};

template <typename T>
class ring<T>::iterator{
    int m_pos;
    ring & m_ring;
public:
    iterator (int pos, ring& obj) :m_pos(pos), m_ring(obj){
        
    }
    iterator& operator++ (int) {
        m_pos++;
        return *this;
    }
    iterator& operator++ () {
        m_pos++;
        return *this;
    }
    T& operator* (){
        return m_ring.get(m_pos);
    }
    bool operator!= (const iterator& obj) const{
        return m_pos != obj.m_pos;
    }
};
*/
    

