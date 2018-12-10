//  28. Overloading Equality Test

#include <iostream>
#include "Complex.hpp"

using namespace std;

int main(){
    
    Complex c1(3, 2);
    Complex c2(3, 4);
    
    if(c1 != c2){
        cout << "Not Equals" << endl;
    } else cout << "Equals" << endl;
    
    if(c1 == c2){
        cout << "Equals" << endl;
    } else cout << "Not Equals" << endl;
    
    return 0;
}
