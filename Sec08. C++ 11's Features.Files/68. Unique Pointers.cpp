// 68. Unique Pointers

#include <iostream>
#include <memory> // to use smart pointer
// either use iostream or memory

using namespace std;

class Test {
public:
    Test() {
        cout << "created " << endl;
    }
    void greet() {
        cout << "hello" << endl;
    }
    ~Test() {
        cout << "destroyed" << endl;
    }
};

class Temp {
    unique_ptr<Test[]> pTest;
    // no longer need to have destructor
public:
    Temp() : pTest(new Test[2]){ }
};

int main () {
    
    
    unique_ptr<int> pTest(new int);     //handle dellocation for you
    *pTest = 7;
    cout << *pTest << endl;
    
    unique_ptr<Test> pTest3(new Test);
    pTest3->greet();     // finished -> destroyed
    // unique or smart pointer cleans up the memory when going out ot scope
    
    {
        unique_ptr<Test> pTest(new Test);
        pTest->greet(); // destroyed -> finished
    }
    
    unique_ptr<Test[]> pTest2(new Test[2]);
    pTest2[0].greet();
    
    Temp temp;
    
    cout << "finished " << endl;
    return 0;
}

