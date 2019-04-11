// 66. Perfect Forwarding

#include <iostream>
using namespace std;

class Test {
    
};

template<class T>
void call(T&& arg){
    
    check(arg);
    // call(Test()) : lvalue, call(test) : lvalue
    
    check(static_cast<T>(arg));
    // call(Test()) : rvalue, call(test) : lvalue
    
    check(forward<T>(arg));
    // call(Test()) : rvalue, call(test) : lvalue
    
}
void check(Test & t){
    cout << "lvalue" << endl;
}
void check(Test && t){
    cout << "rvalue" << endl;
}
int main(){
    
    auto&& t1 = Test(); // rvalue reference
    
    Test test;
    auto&& t2 = test;   // lvalue reference
    // if auto boiled down to a lvalue refence type, the whole reference && get collapsed --reference collapsing c++11
    
    //    call(test);
    call(Test());
    
    return 0;
}
