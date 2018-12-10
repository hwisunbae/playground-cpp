//  49. Introducing Lambda Expressions
#include <iostream>

using namespace std;

void test(void (*pFunc)()) {
    pFunc();
}

int main(){
    
    auto func = [](){ cout << "Hello" << endl; };
    
    func(); //  <=>  [](){ cout << "Hello" << endl; }();
    
    test(func);
    
    test([](){ cout << "Hello again" << endl; });
    
    return 0;
    
}

/*
 EXERCISE -- Function Pointers
void test(int value){
    cout << "Hello " << value << endl;
}

int main() {
    test (5);
    void (*pTest)(int) = test;
    
    pTest(4);
    return 0;
}
 */


/*
 EXERCISE (functors)
 -------------------
struct Test {
    virtual bool operator()(string& str) =0;
    virtual ~Test(){}
};
struct matchTest : public Test {
    bool operator()(string& str){
        return str == "lion";
    }
};
void check (string& text, Test& tst){
    if(tst(text)){
        cout << "match" << endl;
    }else cout << "no match" << endl;
}
int main(){
    string lion {"lion"};
    matchTest mt;
    cout << mt(lion) << endl;
    check(lion, mt);
    return 0;
}
*/
