//  20. Sets

#include<iostream>
#include<set>
using namespace std;
class Test {
    int id;
    string name;
public:
//    Test() : id(0), name(""){};
    Test(int i , string n) : id(i), name(n){};
    void print() const {
        cout << id <<", " << name <<endl;
    }
    bool operator<(const Test& t)const{
        return name < t.name;

//        if(name == t.name) {
//            return id < t.id;
//        } else return name < t.name;
    }
};
int main(){
    set<int> num;
    num.insert(50);
    num.insert(10);
    num.insert(30);
    num.insert(30);
    num.insert(20);

    for(set<int>::iterator it=num.begin(); it!= num.end(); it++){
        cout << *it << endl;
    }
    //set stored the unique value

    set<int>::iterator itFind = num.find(130);
    if(itFind != num.end()){
        cout << "found" << *itFind<< endl;
    } else {
        cout << "not found "<<endl;
    }

    if(num.count(30)){
        cout << "number found" << endl;
    }

    set<Test> tests;
    tests.insert(Test(10, "hwisun"));
    tests.insert(Test(20, "bowen"));
    tests.insert(Test(333, "bowen"));
    tests.insert(Test(30, "sue"));

    for(set<Test>::iterator it = tests.begin(); it!=tests.end(); it++){
        it->print();
    }
    return 0;

}

//#include <iostream>
//#include <set>
//using namespace std;
//
//class Test{
//    
//    int age;
//    string name;
//public:
//    Test() : age(0), name("") {};
//    Test(int a, string n) : age(a), name(n){};
//
//    void print() const{
//        cout << age << " " << name << endl;
//    }
//    bool operator<(const Test& t) const{
//        return name < t.name;
//    }
//    
//};
//int main(){
//    set<Test> person;
//    
//    person.insert(Test(25, "hwisun"));
//    person.insert(Test(26, "bowen"));
//    person.insert(Test(20, "someone"));
//
//    for(set<Test>::iterator it = person.begin(); it!= person.end(); it++){
//        it->print();
//    }
//    return 0;
//}
