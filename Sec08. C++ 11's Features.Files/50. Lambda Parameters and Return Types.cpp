//  50. Lambda Parameters and Return Types
#include <iostream>
#include <vector>

using namespace std;

void testGreet(void (*greet)(string)) {
    greet("bowen");
}
void runDivide(double (*pDiv)(double a , double b)){
    auto rval = pDiv(9, 3);
    cout << rval << endl;
}

int main() {
    
    auto pGreet = [](string name){ cout << "hello : " << name << endl;};
    pGreet("hwisun");
    testGreet(pGreet);
    
    auto pDivide = [](double a, double b) -> double{
        if (b == 0.0){
            return 0;
        }
        return a / b;
    };
    cout << pDivide(10.0, 5.0) << endl;
    cout << pDivide(10.0, 0.0) << endl;
    
    runDivide(pDivide);
    
    return 0;
}


/*
 EXERCISE
 -----------------
 
void testGreet(void (*pGreet)(string)){
    pGreet("bowen");
}
void testDivide(double (*pDivide)(double a, double b)){
    double val = pDivide(3,9);
    cout << val << endl;
}

int main() {
    auto greet = [](string name){ cout << "Hello : " << name << endl;};
    greet("hwisun");
    testGreet(greet);
    
    auto divide = [](double a, double b) -> double{
        if(b == 0) return 0;
        return a/b;
    };
    cout << divide(5, 10) << endl;
    testDivide(divide);
    
    return 0;
}
 */

/*
EXERCISE -- using function pointers
------------------------------------

bool match(string str){
    return str.size() == 3;
}
int textMatch (vector<string>&str, bool (*pMatch)(string str)){
    int count = 0;
    for(int i = 0; i < str.size(); i ++){
        if(pMatch(str[i])){
            count++;
        }
    }
    return count;
}

int main(){
    vector<string> str;
    str.push_back("one");
    str.push_back("two");
    str.push_back("three");
    str.push_back("one");
    str.push_back("two");
    str.push_back("four");
    
    cout << match("one") << endl;
    
    cout << textMatch(str, match)<< endl;
    
    return 0;
}
*/


