
//  63. Static Casts
#include <iostream>

using namespace std;
class Parent {
public:
    void speak(){
        cout << "parent" << endl;
    }
};
class Brother : public Parent{
    
};
class Sister : public Parent {
    
};

int main(){
    
    Parent parent;
    Brother brother;
    
//    Parent * pp = &brother;
//    Brother *pb = static_cast<Brother*>(&parent); --unsafe
    
    // unsafe to do -- compile time, not runtime error
    Parent* ppb = &brother;
    Brother* pbb = static_cast<Brother*>(ppb);
    cout << pbb << endl;
    
    Parent&& p = static_cast<Parent &&>(parent);
    p.speak();
    
//    float value = 3.23;
//    cout << int(value) << endl;
//    cout << (int)value << endl;
//    cout << static_cast<int>(value) << endl;
    
    return 0;
}


