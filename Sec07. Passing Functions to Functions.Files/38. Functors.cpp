//  38. Functors ; another way of passing blocks of code
#include <iostream>
using namespace std;
struct Test {
    virtual bool operator()(string& text)=0;
    virtual ~Test(){}
};
struct matchTest : public Test{
    bool operator()(string& text){
        return text == "lion";
    }
};

void check (string text, Test& test) {
    if(test(text)){
        cout << "Text matches" << endl;
    } else cout << "No text mathces" << endl;
}

int main() {
    matchTest mt;
    string lion = "lion";
    
    cout << mt(lion)<< endl;
    check(lion, mt);
    
    
    return 0;
    
}

    
    /* EXERCISE
     --------------------
     
     struct Test {
     virtual bool operator()(string& text)= 0;
     virtual ~Test() {}
     };
     struct MatchTest : public Test{
     virtual bool operator()(string& text){
     return text == "lion";
     }
     };
     void check(string text, Test& test){
     if(test(text)){
     cout << "Text matches!" << endl;
     } else cout << "No match" << endl;
     }
     int main() {
     MatchTest pred;
     
     string value = "lions";
     
     check(value, pred);
     
     return 0;
     
     }
     */
    
    /*
     EXERCISE
     --------------------------
     class Animal{
     public:
     virtual void speak() =0;
     virtual void run() = 0;
     };
     class Dog : public Animal {
     public:
     void speak() {
     cout << "Woff" << endl;
     }
     };
     
     class Labrador : public Dog {
     public:
     void run() {
     cout << "gogo" << endl;
     }
     };
     void test (Animal& a){
     a.run();
     }
     int main() {
     Labrador lab;
     Animal * ani[5];
     ani[0] = &lab;
     ani[0]->run();
     test(lab);
     return 0;
     }
     */
