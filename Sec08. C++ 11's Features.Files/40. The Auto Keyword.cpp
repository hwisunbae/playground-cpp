//  40. The Auto Keyword
#include <iostream>
#include <typeinfo>
using namespace std;
// for trailing type, need to use decltype(value)

auto teste() -> int {
    return 100;
    // -> int get useful when to use template function
}

template<typename T, typename S>
auto test(T value, S value2) -> decltype(value + value2) {
    return value + value2;
}

int get () {
    return 999;
}
auto test2() -> decltype(get()){
    // be able to use function inside decltype bracket
    return get();
}

int main(){
    
    auto value = 7;
    auto text ="hello";
    cout << value << endl;
    cout << text << endl;
    
    cout << teste() << endl;
    cout << test(5, 6) << endl;
    cout << test2() << endl;
    
    return 0;
}

/* EXERCISE
 ---------------------
 template<typename T, typename S>
 auto test(T value, S value2) -> decltype(value+value2){
 return value + value2;
 }
 int get() {
 return 999;
 }
 
 auto test2() -> decltype(get()){
 return get();
 }
 
 int main(){
 auto text = "hello";
 auto num = 6;
 //    cout << num << endl;
 //    cout << test(5,4) << endl;
 cout << test2() << endl;
 return 0;
 }
*/

