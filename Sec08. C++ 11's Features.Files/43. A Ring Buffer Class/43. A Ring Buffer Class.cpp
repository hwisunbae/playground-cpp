//  43. A Ring Buffer Class
#include <iostream>
#include "ring.hpp"

using namespace std;

int main() {
    
//    ring<string>::iterator it;
//    it.print();
    
    ring<string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");
    textring.add("five");

    for (int i =0;i < textring.size(); i++){
        cout << textring.get(i) << endl;
    }
    
    return 0;
}
