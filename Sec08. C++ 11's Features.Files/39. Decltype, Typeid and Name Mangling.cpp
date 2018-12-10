//  39. Decltype, Typeid and Name Mangling
#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    string value;
    cout << typeid(value).name() << endl;
    // name mangling ;
    // i for int, d for double
    // NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE for string
    
    string str;
    decltype(str) name;
    name = "bob";
    cout << name << endl;
    
    return 0;
}
