//  52. Capturing this With Lambdas
#include <iostream>

using namespace std;
class Test {
private:
    int one {1};
    int two {2};
public:
    void run() {
        int three {3};
        int four {4};
        
        auto pLambda = [&, this](){
            
            // this for catching instatnce variable such as one, two
            // this is catched by reference
            // dont need to be first arg
            
            one = 111;
            cout << one << endl;
            cout << two << endl;
            three = 333;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();
    }
};

int main() {
    
    Test test;
    test.run();
    
    return 0;
}
