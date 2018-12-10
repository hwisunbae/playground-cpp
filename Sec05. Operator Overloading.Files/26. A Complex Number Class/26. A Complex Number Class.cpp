//  26. A Complex Number Class

#include <iostream>
#include "Complex.hpp"

using namespace std;

int main(){

    Complex c1(2,3);
    Complex c2 (c1);
//    cout << c2 << endl;
    Complex c3;
    c3 = c2;
    cout << c2 << ":" <<c3 <<  endl;
    

    return 0;
}
