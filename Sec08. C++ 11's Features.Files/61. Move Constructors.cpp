
//  61. Move Constructors
#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

class Test{
private:
    static const int SIZE = 100;
    int* _pBuffer {nullptr};
public:
    
    Test(){ // constructor
        _pBuffer = new int[SIZE]{};
        
//        another way of initializing all buffer to 0
//        memset(_pBuffer, 0, sizeof(int)*SIZE);
    }
    Test(int i){ // parameterized constructor
        _pBuffer = new int[SIZE]{};
        
        for(int i = 0;i < SIZE;i ++){
            _pBuffer[i] = 7*i;
        }
    }
    Test(const Test& obj){ // copy constructor
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, obj._pBuffer, SIZE*sizeof(int));
        
    }
    Test(Test &&other){
        cout << "Move constructor" << endl;
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;
    }
    Test& operator=(const Test& obj){ // assignment
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, obj._pBuffer, SIZE*sizeof(int));
        return *this;
    }
    ~Test(){ //destructor
        delete [] _pBuffer;
    }
    friend ostream& operator<<(ostream& os, const Test& test);
};
ostream& operator<<(ostream& os, const Test& test){
    os << "Hello from test";
    return os;
}

Test getTest(){
    return Test();
}

int main(){
    vector<Test> vec;
    vec.push_back(Test());
    

    return 0;
}


