//  56. Elision and Optimization.avi
#include <iostream>
#include <vector>

/* turned off optimization flag */

using namespace std;

class Test{
    Test(){
        cout << "constructor" << endl;
    }
    Test(int i){
        cout << "parameterized constructor" << endl;
    }
    Test(const Test& obj){
        cout << "copy constructor" << endl;
    }
    Test& operator=(const Test& obj){
        cout << "assignment" << endl;
        return *this;
    }
    ~Test(){
        cout << "destructor" << endl;
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


