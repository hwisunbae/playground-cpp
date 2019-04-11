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
    
    float value = 3.23;
    cout << int(value) << endl;
    cout << (int)value << endl;
    cout << static_cast<int>(value) << endl;
    
    
    Parent parent;
    Brother brother;
    //
    Parent* pp = &brother;
    //    Brother* pb = &parent;
    Brother* pb = static_cast<Brother*>(&parent); // force to make pb to point to parent -> unsafe
    //
    //    // unsafe to do -- compile time to get your code running , not runtime checking
    Parent* ppb = &brother;
    Brother* pbb = static_cast<Brother*>(ppb);
    //    cout << pbb << endl;
    //
    Parent&& p = Parent();
    //    Parent&& p = parent;
    Parent&& p1 = static_cast<Parent &&>(parent);
    p1.speak();
    
    return 0;
}
