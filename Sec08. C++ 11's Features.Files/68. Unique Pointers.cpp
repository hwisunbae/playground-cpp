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
    
public:
    Temp() : pTest(new Test[2]){
        
    }
};

int main () {
    
    {
        Temp temp;
        //    unique_ptr<Test[]> pTest(new Test[2]);
        //
        //    pTest[0].greet();
        
        //    unique_ptr<Test> pTest(new Test);
        //
        //    pTest->greet();
        // unique or smart pointer cleans up the memory when going out ot scope
    }
    
    
    cout << "finished" << endl;
    return 0;
}

