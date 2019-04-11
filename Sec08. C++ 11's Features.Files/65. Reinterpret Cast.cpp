
//65. Reinterpret Cast
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
    Sister sister;
    
    Parent* ppb = &brother;
    //    Sister* pps = dynamic_cast<Sister*>(ppb);     // it's null
    //    Sister* pps = static_cast<Sister*>(ppb);      // 0x7ffeefbff4b8
    Sister* pps = reinterpret_cast<Sister*>(ppb);   // 0x7ffeefbff4b8
    
    
    if(pps == nullptr){
        cout << "it's null" << endl;
    } else {
        cout << pps << endl;
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
