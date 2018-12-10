//  35. Using Function Pointers

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test){
//    return test == "two";
    return test.size() == 3;
}

int countString(vector<string>&texts, bool (*match)(string test)){
    int tally = 0;
    for (int i = 0; i < texts.size(); i ++){
        if (match(texts[i])){
            tally++;
        }
    }
    return tally;
}

int main(){

    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    cout << match("ons") << endl;

    cout << count_if(texts.begin(), texts.end(), match) << endl;

    cout << countString(texts, match) << endl;

    return 0;
}


/*
 EXERISE
 -------------------
bool match(string st){
    return st.size() == 3;
}
int count(vector<string>&str, bool (*pMatch)(string st)){
    int c = 0;
    for (int i = 0; i < str.size(); i ++){
        if((*pMatch)(str[i])){
            c++;
        }
    }
    return c;
}


int main(){
    
    vector<string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings.push_back("two");
    strings.push_back("four");
    strings.push_back("two");
    strings.push_back("three");
//    cout << strings.size() << endl;
    
    cout << match("one") << endl;
    cout << count_if(strings.begin(), strings.end(), match) << endl;
    cout << count(strings, match) << endl;
    
    
    return 0;
}

*/
