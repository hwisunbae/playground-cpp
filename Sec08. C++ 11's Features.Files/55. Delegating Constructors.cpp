//  55. Delegating Constructors
#include <iostream>

using namespace std;

class Parent {
    int dogs {5};
    string text{"Hello"};
public:
    Parent(): Parent("hello"){
        cout << "No parameter parent constructor" << endl;
    }
    Parent(string text){
        cout << "String parent constructor" << endl;
    }
};
class Child: public Parent{
public:
    Child() = default;
};

int main(){

    Parent parent("helo");
    Child child;
    
    return 0;
}


