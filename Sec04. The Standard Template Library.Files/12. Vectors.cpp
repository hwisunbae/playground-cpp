//  12. Vectors

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){

    vector<string> strings; //strings(5)

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
        cout << *it << endl;
    }
    // prints three
    vector<string>::iterator it = strings.begin();
    it += 2;
    cout << *it << endl;

    return 0;
}

/* current lesson
  ------------------
int main() {
    
    vector<string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    
    for(vector<string>::iterator it=strings.begin(); it != strings.end(); it ++){
        cout << *it << endl;
    }
    return 0;
}
*/

/* last lecture
 ------------------
 
 
#pragma pack(push,1)
struct Person {
    
    char name [50];
    int age;
    double height;
};
#pragma pack(pop)
int main() {
 
    ofstream outFile;
    
    string fileName = "text.bin";
    
    outFile.open(fileName, ios::binary);
    
    Person someone = {"hwisun", 26, 0.8};
    
    if(outFile.is_open()){
        
//        outFile.write(<#const char_type *__s#>, <#streamsize __n#>)
        outFile.write(reinterpret_cast<char *>(&someone), sizeof(someone));
        
        outFile.close();
        
    } else {
        cout << "hasn't been created properly " << endl;
    }
 
    ifstream inFile;
    
    inFile.open(fileName, ios::binary);
    
    Person someoneElse = {};
    
    if(inFile.is_open()){
        
//        inFile.read(<#char_type *__s#>, <#streamsize __n#>)
        inFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(someoneElse));
        
        inFile.close();
        
    } else {
        cout << "hasn't been created properly " << endl;
    }
    
    cout << someoneElse.name << ' ' << someoneElse.age << ' ' << someoneElse.height;
    
    return 0;
}

*/
