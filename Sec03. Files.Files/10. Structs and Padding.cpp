//  10. Structs and Padding

#include <iostream>

using namespace std;

#pragma pack(push, 1) //preprocessor directive ; turn off packing

struct Person {
//    string name; not be able to store actual text
    char name [50];
    int age;
    double weight;
};

#pragma pack(pop)

int main(){
    
    cout << sizeof(Person) << endl;
    
    return 0;
}
