//  51. Lambda Capture Expressions
#include <iostream>

using namespace std;

int main() {
    
    int one {1};
    int two {2};
    int three {3};
    
    // Capture one and two by value
    [one, two](){cout << one <<  ", " <<  two << endl; }();
    
    // Capture all local variables by value
    [=](){cout << one <<  ", " <<  two << endl; }();
    
    // Default capture all local variables by value, but capture three by reference
    [=, &three](){ three = 7; cout << three << endl; }();
    
    // Default capture all local variables by reference
    [&](){ three = 3; two = 8; cout << three << "  " << two << endl; }();
    
    // Default capture all local variables by reference, but two and three by value
    [&, two, three](){ one = 10; cout << one << endl; }();
    
    return 0;
}
