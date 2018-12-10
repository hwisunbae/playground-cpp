//  16. Maps

#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int>ages;
    ages["Mike"] = 50;
    ages["hwisun"] = 25;
    ages["bowen"] = 26;
    
    //    cout << ages["hi"] << endl;
    if(ages.find("hi") != ages.end()){
        cout << " key found " << endl;
    } else {
        cout << " key not found " << endl;
    }
    
    //    pair<string,int>age("Bob", 20);
    //    auto it = ages.begin();
    //    ages.insert(it, age);
    
    ages.insert(make_pair("Bob", 20));
    
    
    for(map<string,int>::iterator it=ages.begin(); it!=ages.end(); it++){
        cout << it->first << " : " << it->second <<endl;
    }
    
    return 0;
}
