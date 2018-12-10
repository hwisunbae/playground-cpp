//  36. Object Slicing and Polymorphism
#include <iostream>
using namespace std;
class Parent {
    int one;
public:
    Parent() : one(0) {

    }
    Parent(const Parent & obj) :one(0) {
        one = obj.one;
        cout << "copy parent" << endl;
//        *this = obj;
    }
    virtual void print() {
        cout <<  "parent" << endl;
    }
    virtual ~Parent() {

    }
};
class Child : public Parent {
    int two;
public:
    Child() : two(0){
        
    }
    void print() {
        cout << "child" << endl;
    }
};

int main(){
    
    Child c1;
    Parent & p1 = c1;
    p1.print();
    
    Parent p2 = Child();
    p2.print();
    return 0;
    
}

/*
 EXERISE
 -------------------
 
 bool match(string str) {
 if(str.size() == 3){
 return true;
 }
 else return false;
 }
 
 int matchCustomed (vector<string>& str, bool (*pMatch)(string txt)){
 int count = 0 ;
 for(int i = 0; i < str.size();i ++) {
 if (pMatch(str[i])){
 count++;
 }
 }
 return count;
 }
 
 int main() {
 
 vector<string> str;
 str.push_back("one");
 str.push_back("two");
 str.push_back("three");
 str.push_back("four");
 str.push_back("one");
 str.push_back("two");
 str.push_back("five");
 
 cout << match("one") << endl;
 
 //    cout << count_if(str.begin(), str.end(), match);
 cout << matchCustomed(str, match) << endl;
 
 return 0;
 }
 */
