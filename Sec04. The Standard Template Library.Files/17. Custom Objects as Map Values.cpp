//  17. Custom Objects as Map Values

#include <iostream>
#include <map>

using namespace std;
class Person {
    string name;
    int age;
public:
    Person() : name(""), age(0) {};
    Person(const Person& p){
        cout << "copy constructor running" << endl;
        *this = p;
    }
    Person(string n, int a) : name(n), age(a){};
    void print() const {
        cout << name << " : " << age << endl;
    }
};

int main(){

    map<int, Person> people;
    people[50] = Person("Mike", 40);
    people[32] = Person("Hwisun" , 25);
    people[2] = Person("Bowen", 26);

    people.insert(make_pair(55, Person("Bob", 45)));
    people.insert(make_pair(55, Person("sue", 24)));

    for(map<int, Person>::iterator it=people.begin(); it!= people.end(); it++){
        cout << it->first << " : " << flush;
        it->second.print();
    }

    return 0;
}
