// 67. Bind

#include <iostream>
#include <functional>

using namespace std;
//using namespace placeholders;

class Test {
public:
    int add(int a, int b, int c){
        cout << a << ", " << b << ", " << c << endl;
        return a + b + c;
    }
};

int run(function<int(int, int)> func) {
    return func(7, 3);
}
int main() {
    
    //    cout << add(1, 2, 3) << endl;
    
    //    auto calculator = bind(add, 3, 4, 5);
    //  <=> auto calculator = bind(add, 3, 4, 5);
    
    
    
    //    auto calculator = bind(add, std::placeholders::_2, std::placeholders::_3 ,std::placeholders::_1);
    
    //    cout << calculator(10, 20, 30) << endl; // 20, 30 , 10
    
    Test test;
    
    auto calculator = bind(&Test::add, test, std::placeholders::_2, 100 ,std::placeholders::_1);
    
    //    cout << calculator(10, 20) << endl; // 20, 100, 10
    cout << run(calculator) << endl;
    
    return 0;
}
