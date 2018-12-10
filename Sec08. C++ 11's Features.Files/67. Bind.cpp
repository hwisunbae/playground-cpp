// 67. Bind

#include <iostream>
//#include <functional>
using namespace std;
//using namespace placeholders;

int add(int a, int b, int c){
    cout << a << ", " << b << ", " << c << endl;
    return a + b + c;
}
void run(function<int(int, int)>) {
    
}
int main() {
    
//    cout << add(1, 2, 3) << endl;
    
    auto calculator = bind(&add, std::placeholders::_2, 100 ,std::placeholders::_1);
    //can't change the order of placeholders' values
    
    cout << calculator(10, 20) << endl;
    
    return 0;
}
