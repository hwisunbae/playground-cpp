
//64. Dynamic Cast
#include <iostream>
using namespace std;

class Parent {
    virtual void speak() {      // if there's not virtual, get the error like "Parent" is not polymorphic
        cout << "parent" << endl;
    }
};
class Brother : public Parent {
    
};
class Sister : public Parent {
    
};

int main () {
    
    Parent parent;
    Brother brother;
    
    Parent* ppb = &parent; // if use &brother, it has not nullptr.
    Brother* pbb = dynamic_cast<Brother*>(ppb);
    
    if(pbb == nullptr){
        cout << "invalie cast" << endl;
    } else {
        cout << pbb << endl;
    }
    
    // static_cast still allow us to point to superclass
    // superclass might lack methods that the subclass has,
    // and you might try to call using this pointer, it will crash
    // run time can detect if it makes sense
    
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
