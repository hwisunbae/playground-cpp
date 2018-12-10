//  44. Making Classes Iterable
#include <iostream>
#include "ring.hpp"

using namespace std;

int main() {
    
    ring<string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");
    textring.add("five");

    for (int i =0;i < textring.size(); i++){
        cout << textring.get(i) << endl;
    }
    
    // C++ 98 style
    for(ring<string>::iterator it=textring.begin(); it != textring.end(); it++){
        cout << *it << endl;
    }
    cout << endl;
    
    // C++ 11 style
    for(auto value: textring){ // <=> for(string value: textring){
        cout << value << endl;
    }
    
    return 0;
}
