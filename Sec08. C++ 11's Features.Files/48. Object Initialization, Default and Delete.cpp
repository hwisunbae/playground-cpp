//  48. Object Initialization, Default and Delete.cpp
#include <iostream>
using namespace std;


class Test{
    int id{3};
    string name{"hwisun"};
public:
    Test() = default;
    Test(const Test& obj) = delete;
    Test& operator=(const Test& obj) = delete;

    Test(int id): id(id){

    }
    void print(){
        cout << id << ": " << name << endl;
    }
};

int main() {
    Test test;
    test.print();

    Test test2(77);
    test2.print();

//    won't work -- we delete them!
//    Test test3 = test;
//    test2 = test;

    return 0;
}


/*
 EXERCISE
 --------------------
 
class Test {
    int id {0};
    string name {"hwisun"};
public:
    Test() = default;
    Test(const Test& obj) = default;
    Test& operator=(const Test& obj) = default;
    Test(int id): id(id){
        
    }
    
    void print() {
        cout << id << " : " << name << endl;
    }
};

int main(){
    Test ts;
    ts.print();
    
    Test ts2(4);
//    ts2 = ts;
    ts2.print();
    
    ts = ts2;
    ts.print();
    
    
    return 0;
}
*/
