
//65. Reinterpret Cast
#include <iostream>
using namespace std;
class Parent {
public:
    virtual void speak(){
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
    Sister sister;
    
    // unsafe to do -- compile time, not runtime error
    // dynamic cast detect runtime error if it doesn't make sense
    Parent* ppb = &brother;
    Sister* pbb = reinterpret_cast<Sister*>(ppb);
    
    if(pbb == nullptr){
        cout << "Invalid cast" << endl;
    } else {
        cout << pbb << endl;
    }
    
    return 0;
}


/*
 EXERCISE - 63
 --------------------
 
 int main(){
 Parent parent;
 Brother brother;
 
 Parent* pp = &brother;
 Brother* bb = static_cast<Brother*>(&parent);
 
 Parent* ppb = &brother;
 Brother* pbb = static_cast<Brother*>(ppb);
 
 return 0;
 }
 */
