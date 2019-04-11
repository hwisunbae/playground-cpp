// 69. Shared Pointers

#include <iostream>
#include <memory> // to use smart pointer
// either use iostream or memory

using namespace std;

class Test {
public:
    Test() {
        cout << "created" << endl;
    }
    void greet() {
        cout << "hello" << endl;
    }
    ~Test() {
        cout << "destryoed" << endl;
    }
};

int main() {
    shared_ptr<Test> pTest2(nullptr);
    
    {
        shared_ptr<Test> pTest1(new Test()); // finishd -> destroyed
        // <=> shared_ptr<Test> pTest2 = make_shared<Test>();
        
        pTest2 = pTest1;
        // without this, dstroyed -> finsihed
    }
    cout << "finished" << endl;
    return 0;
}
