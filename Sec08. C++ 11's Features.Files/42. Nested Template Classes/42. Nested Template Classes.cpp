//  42. Nested Template Classes
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

    for(int i = 0;i < textring.size(); i++){
        cout << textring.get(i) << endl;
    }
    
    /*
     * OUTPUT SHOULD BE
     four
     one
     two
     */
    
    return 0;
}
