//  6. Exception Catching Order

#include <iostream>
#include <exception>
using namespace std;

void goesWrong(){
    bool error1Detected = true;
    bool error2Detected = true;
    if (error1Detected){
        throw bad_alloc();
    }
    if (error2Detected){
        throw exception();
    }
}
int main(){
    try {
        goesWrong();
    }
    catch(bad_alloc& e){
        cout << "Catching bad_alloc: " <<  e.what() << endl;
    }
    // bad_alloc is a subclass of exception
    // when bad_alloc is thrown, the order of catch is important
    // to catch bad_alloc exception
    catch(exception& e){
        cout << "Catching exception: " << e.what() << endl;
    }

    return 0;
}

/*
 EXERCISE
 --------------------
 
int main(){
    try {
        bool error1 {false};
        bool error2 {true};
        
        if(error1){
            throw bad_alloc();
        }
        if(error2){
            throw exception();
        }
        
    }
    catch (bad_alloc& e){
        cout << "bad_alloc caught: " << e.what() << endl;
    }
    catch (exception& e){
        cout << "exception caugth: " << e.what() << endl;
    }
    return 0;
}
 */

