//  4. Standard Exceptions
//  bad_alloc - handles the allocation exception thrown by new.  This class needs the <new> header file

#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char * pMemory = new char [9999999999999999999];
        delete [] pMemory ;
    }
};

int main(){
    try {
        CanGoWrong wrong;
    }
    catch(bad_alloc &e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    cout << "still running" << endl;
    
    return 0;
}

