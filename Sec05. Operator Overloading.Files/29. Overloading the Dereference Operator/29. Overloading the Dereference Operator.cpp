//  29. Overloading the Dereference Operator

#include <iostream>
#include "Complex.hpp"

using namespace std;

int main(){
    
    Complex c1(2, 4);
    cout << *c1 + *Complex(4, 3)<< endl;
    
    return 0;
}
