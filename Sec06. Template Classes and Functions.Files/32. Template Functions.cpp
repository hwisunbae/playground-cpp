//  32. Template Functions

#include <iostream>

using namespace std;

template<class T> // <=> template<typename T>
void print(T n){
    cout << n << endl;
}

int main(){
    
    print<string>("hello");
    print<int>(5);
    
    print("Hi there");
    
    return 0;
}
