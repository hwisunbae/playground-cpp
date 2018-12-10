//  15. Lists

#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> num;
    
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    
    num.push_front(0);
    
    list<int>::iterator it = num.begin();
    it++;
    num.insert(it, 100);
    cout << "Element: " << *it << endl;
    //still pointing to 1
    
    list<int>::iterator eraseIt = num.begin();
    eraseIt++;
    eraseIt = num.erase(eraseIt);
    // without using eraseIt = ; you get the previous pointer
    cout << "Element: " << *eraseIt << endl;
    
    for(list<int>::iterator it = num.begin(); it != num.end(); it++){
        if(*it == 2){
            num.insert(it, 1234);
        }
        if(*it == 1){
            it = num.erase(it);
        }
        else {
            it++;
        }
    }
    
    for(list<int>::iterator it = num.begin(); it != num.end(); it++){
        cout << *it << endl;
    }
    
    
    return 0;
}
