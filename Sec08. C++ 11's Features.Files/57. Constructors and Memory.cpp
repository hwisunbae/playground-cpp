
//  57. Constructors and Memory
#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

class Test{
private:
    static const int SIZE = 100;
    int* _pBuffer;
public:
    
    Test(){
        cout << "constructor" << endl;
        _pBuffer = new int[SIZE]{};
        
//        another way of initializing all buffer to 0
//        memset(_pBuffer, 0, sizeof(int)*SIZE);
    }
    Test(int i){
        cout << "parameterized constructor" << endl;
        _pBuffer = new int[SIZE]{};
        
        for(int i = 0;i < SIZE;i ++){
            _pBuffer[i] = 7*i;
        }
    }
    Test(const Test& obj){
        cout << "copy constructor" << endl;
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, obj._pBuffer, SIZE*sizeof(int));
        
    }
    Test& operator=(const Test& obj){
        cout << "assignment" << endl;
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, obj._pBuffer, SIZE*sizeof(int));
        return *this;
    }
    ~Test(){
        cout << "destructor" << endl;
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
    Test test1 = getTest();

    vector<Test> vec;
    vec.push_back(Test());

    cout << test1 << endl;

    return 0;
}


