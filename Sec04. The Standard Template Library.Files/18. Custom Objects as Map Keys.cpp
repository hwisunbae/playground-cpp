//  18. Custom Objects as Map Keys

#include <iostream>
#include <map>

using namespace std;
class Person {
    string name;
    int age;
public:
    Person() : name(""), age(0) {};
    Person(const Person& p){
//        cout << "copy constructor running" << endl;
        *this = p;
    }
    Person(string n, int a) : name(n), age(a){};
    void print() const {
        cout << name << " : " << age << flush;
    }
    bool operator<(const Person& p) const{
        if (name == p.name) return age < p.age; // without this line, upper mike will be displayed
        else return name < p.name;
    }
};

int main(){

    map<Person, int> people;
    
    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 10000)] = 30;
    people[Person("Hwisun" , 25)] = 30;
    people[Person("Bowen", 26)] = 20;

    for(map<Person, int>::iterator it=people.begin(); it!= people.end(); it++){
        cout << it->second << " : " << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}
