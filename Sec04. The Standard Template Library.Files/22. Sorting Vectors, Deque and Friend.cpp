//  22. Sorting Vectors, Deque and Friend

#include <iostream>
#include <vector>
using namespace std;

class Test {
    int id;
    string name;
public:
    Test(int id, string name) : id(id), name(name){};
    ~Test(){
        //        cout << "destroyed" << endl;
    }
    void print(){
        cout << id << " " <<  name << endl;
    }
    friend bool comp(const Test& t, const Test& t2);
};
bool comp(const Test& t, const Test& t2) {
    return t.name < t2.name;
}

int main() {
    vector<Test> tests;
    
    tests.push_back(Test(5, "A"));
    tests.push_back(Test(3, "D"));
    tests.push_back(Test(10, "B"));
    tests.push_back(Test(7, "C"));

    
    sort(tests.begin(), tests.begin()+4, comp);
    //    sort(<#_RandomAccessIterator __first#>, <#_RandomAccessIterator __last#>, <#_Compare __comp#>)
    
    for(int i=0; i<tests.size(); i++){
        tests[i].print();
    }
    return 0;
}


//#include <queue>
//#include <stack>
//
//using namespace std;
//
//class Test {
//    int id;
//    string name;
//public:
//    Test():id(0), name(""){};
//    Test(int i, string n) : id(i), name(n){};
//    void print() const{
//        cout << id << " " << name << endl;
//    }
//};
//int main() {
//    /* QUEUE */
//    queue<Test> testQ;
//    testQ.push(Test(10, "hwisun"));
//    testQ.push(Test(20, "bowen"));
//    testQ.push(Test(30, "kam"));
//    testQ.push(Test(40, "someone"));
//
//    while(!testQ.empty()){
//        Test& testF = testQ.front();
//        testF.print();
//        testQ.pop();
//    }
////    testQ.back().print();
//
//    /* STACK */
//    stack<Test> testS;
//    testS.push(Test(10, "hwisun"));
//    testS.push(Test(20, "bowen"));
//    testS.push(Test(30, "kam"));
//    testS.push(Test(40, "someone"));
//
//    while(!testS.empty()){
//        Test& testP = testS.top();
//        testP.print();
//        testS.pop();
//    }
//
//    return 0;
//}



