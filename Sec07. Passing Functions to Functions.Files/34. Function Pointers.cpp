//  34. Function Pointers

#include <iostream>

using namespace std;

void test(int value) {
    cout << "hello" << value << endl;
}

int main(){

    test(5);

    void (*pTest)(int) = test;

    // OR
    // void (*pTest)();
    // pTest = &test;

    // OR
    // void (*pTest)();
    // pTest = test;


    pTest(8);         // <=> (*pTest)();

    return 0;
}


/*
 EXCERCISE
 -------------

void test(int n){
    cout << "hello" << n << endl;
}
int main(){
    
    test(5);
    
    void (*pTest)(int) = &test;
    
    pTest(7);
    
    return 0;
}
 
 */

