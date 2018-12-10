//  54. Mutable Lambdas
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int cats = 5;
    [cats]() mutable{
        cats = 8;
        cout << cats << endl;
    }();
    
    cout << cats << endl;
    return 0;
}


/*
 EXERCISE
 ---------------------
 
bool check(string& str){
    return str.size() == 3;
}

struct S {
    bool operator()(string& str){
        return str.size() == 5;
    }
} s1;

void run(function<bool(string& str)> func){
    string f_str = "one";
    cout << func(f_str) << endl;
}

int main(){
    int size = 5;
    auto lambda = [size](string& str){
        return str.size() == 5;
    };
    
    vector<string> m_str {"one", "two", "three"};
    
    int count = count_if(m_str.begin(), m_str.end(), lambda);
    cout << count << endl;
    
    int count2 = count_if(m_str.begin(), m_str.end(), check);
    cout << count2 << endl;
    
    int count3 = count_if(m_str.begin(), m_str.end(), s1);
    cout << count3 << endl;
    
    run(lambda); // 0
    run(check); //1
    run(s1); // 0
    
    function<int(int, int)> add = [](int a, int b){
        return a + b;
    };
    cout << add(4,3) << endl;
    
    return 0;
}
 */
