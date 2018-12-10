
// 66. Perfect Forwarding

#include <iostream>
using namespace std;

class Test {
    
};
template<class T>
void call(T&& arg){
//    check(static_cast<T>(arg));
    check(forward<T>(arg));
}
void check(Test & t){
    cout << "lvalue" << endl;
}
void check(Test && t){
    cout << "rvalue" << endl;
}
int main(){
    Test test;
    
    call(test); //lvalue
    call(Test()); //rvalue
    
    return 0;
}
