//  45. Initialization in C++ 98
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // initialize int with curly brackets
    int values [] = {1, 4, 5};
    cout << values[0] << endl;
    
    // initialize class with curly brackets
    class C {
    public:
        string text;
        int id;
    };
    C c1 = {"Hello class", 7};
    cout << c1.text << endl;
    
    // common to use struct instead of class
    struct S {
        string text;
        int id;
    };
    S s1 = {"Hello struct", 7};
    cout << s1.text << endl;
    
    // make struct anonymous
    struct {
        string text;
        int id;
    } r1 = {"Hello struct2", 7}, r2 = {"Hi", 9};
    cout << r1.text << endl;
    cout << r2.text << endl;
    
    // you can initialize vector with curly brackets in C++11
    vector<string> strings;
    strings.push_back("One");
    strings.push_back("Two");
    strings.push_back("Three");
    
    return 0;
}
