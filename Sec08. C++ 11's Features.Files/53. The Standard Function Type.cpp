//  53. The Standard Function Type
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

bool check(string& str) {
    return str.size() == 3;
}
struct S {
    bool operator()(string& str){
        return str.size() == 5;
    }
} s1;

void run(function<bool(string& str)> func){
    string f_str = "she";
    cout << func(f_str) << endl;
}


int main() {
    int size = 5;
    auto lambda = [size](string& str){
        return str.size() == size;
    };

    // 1 -> 1
    vector<string> m_str {"one", "two", "three"};
    int count = count_if(m_str.begin(), m_str.end(), lambda);
    cout << count << endl;

    // 2 -> 2
    int count2 = count_if(m_str.begin(), m_str.end(), check);
    cout << count2 << endl;

    // 3 -> 1
    int count3 = count_if(m_str.begin(), m_str.end(), s1);
    cout << count3 << endl;
    
    // 4 -> 0
    run(lambda);
    // 5 -> 0
    run(s1);
    // 6 -> 1
    run(check);
    
//    auto add = [](int a, int b){
//        return a + b;
//    };
    function<int(int, int)> add = [](int a, int b){
        return a + b;
    };
    cout << add(5 ,3) << endl;



    return 0;
}

/*

bool check(string &test){
    return test.size() == 3;
}

struct Check {
    bool operator()(string& test){
        return test.size() == 5;
    }
} check1;

void run(function<bool(string&)> isFive) {
    string test = "start";
    cout << isFive(test) << endl;
}

int main() {
    
    int size = 5;
    auto lambda = [size](string str){
        return str.size() == size;
    };
    
    // capture int and use it in lambda
    // result: 1
    vector<string> m_str {"one", "two", "three"};
    int count =  count_if(m_str.begin(), m_str.end(), lambda);
    cout << count << endl;
    
    // use function
    // result: 2
    int count2 =  count_if(m_str.begin(), m_str.end(), check);
    cout << count2 << endl;
    
    // by functor
    // result: 1
    int count3 =  count_if(m_str.begin(), m_str.end(), check1);
    cout << count3 << endl;
    
    run(lambda); // result: 1
    run(check1); // result: 1
    run(check);  // result: 2
    
    function<int(int, int)> add = [](int a, int b){
        return a + b;
    };
    cout << add(7, 3) << endl;
    
    return 0;
}
 */


