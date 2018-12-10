//  21. Stacks and Queues

#include <iostream>
#include <stack> //LIFO
#include <queue> //FIFO
using namespace std;
class Test {
    string name;
public:
    Test(string name) : name(name){};
    ~Test(){
//        cout << "destroyed" << endl;
    }
    void print(){
        cout << name << endl;
    }
};


int main(){
    /****** QUEUE *******/
    queue<Test> testQ; // FIFO
    testQ.push(Test("hwisun"));
    testQ.push(Test("kam"));
    testQ.push(Test("bo"));
    
    cout << endl;
    
    while(testQ.size() > 0){
        
        Test& test = testQ.front();
        test.print();
        testQ.pop(); //from the front of the queue
        
    }
    cout << endl;
    testQ.back().print();
    cout << endl;
    
    /****** STACK *******/
    
    stack<Test> testS; //LIFO
    testS.push(Test("hwisun"));
    testS.push(Test("kam"));
    testS.push(Test("bowen"));
    // don't iterate
    
    // how to iterate
    while(testS.size() > 0 ){
        
        Test& test = testS.top();
        test.print();
        testS.pop();
        
    }
    cout << endl;

    Test& test1 = testS.top();
    test1.print();

//    Test& test1 = testS.top();
//    testS.pop();      // be aware of doing this
//    test1.print();    // reference refers to destyroed objects

    testS.pop();
    Test& test2 = testS.top();
    test2.print();
    
    
    return 0;
}
