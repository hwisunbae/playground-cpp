//  24. Overloading the Assignment Operator

#include <iostream>

using namespace std;

class Test {
private:
    int id;
    string name;
public:
    Test(): id(0), name(""){

    }
    Test(int id, string name): id(id), name(name){

    }
    void print(){
        cout << id << ": " << name << endl;
    }
    const Test& operator=(const Test& obj){
        cout << "Assignment runnning " << endl;
        id = obj.id;
        name = obj.name;

        return *this;
    }
    Test(const Test& obj){
        cout << "Copy constructor runnning " << endl;
        *this = obj;
    }
};

int main(){

    Test test1(10, "Mike");
    cout << "Print test1 " << flush;
    test1.print();

    Test test2(20, "Bob");

    test2 = test1;
    cout << "Print test2 " << flush;
    test2.print();

    Test test3;
//    test3 = test2 = test1; should return reference
    test3.operator=(test2); // test3 = test2
    cout << "Print test3 " << flush;
    test3.print();

    cout << endl;

    //Copy initialization
    Test test4 = test1;
    test4.print();

    return 0;
}

/*
 Exercise
 --------------- */
//
//class Test {
//
//private:
//    int id;
//    string name;
//public:
//    Test() : id(0), name(""){
//
//    }
//    Test(int id, string name):id(id), name(name){
//
//    }
//    void print() {
//        cout << id << " " << name << endl;
//    }
//    const Test& operator= (const Test & obj){
//        cout << "Assignment running" << endl;
//        id = obj.id;
//        name = obj.name;
//        return *this;
//    }
//    Test(const Test & obj){
//        cout << "copy constructor running " << endl;
//        *this = obj;
//    }
//
//};
//int main(){
//    Test test1(20, "hwisun");
//    cout << "Print test1 " << flush;
//    test1.print();
//
//    Test test2(10, "bob");
//    test2 = test1;
//    cout << "Print test2 " << flush;
//    test2.print();
//
//    Test test3;
//    test3.operator=(test2);
//    cout << "Print test3 " << flush;
//    test3.print();
//
//    cout << endl;
//    Test test4  = test1;
//    cout << "Print test4 " << flush;
//    test4.print();
//
//    return 0;
//}

