//  25. Printing - Overloading Left Bit Shift

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
    friend ostream& operator<<(ostream &out, const Test &obj){
        out << obj.id << " : " << obj.name;
        return out;
    }
    //friend function can have assess to private members
};

int main(){

    Test test1(10, "Mike");
    Test test2(20, "Bob");

    cout << test1 << test2 << endl;

    return 0;
}


/*
 EXERCISE
 ---------------*/
//
//class Test {
//private:
//    int id;
//    string name;
//public:
//    Test() :id(0), name(""){
//
//    }
//    Test(int id, string name) : id(id), name(name){
//
//    }
//    friend ostream& operator<<(ostream& ostr, const Test & obj){
//        ostr << obj.id << " ; " << obj.name;
//        return ostr;
//    }
//
//};
//
//int main(){
//    Test test1(20, "mike");
//    cout << test1 << endl;
//
//    return 0;
//}
