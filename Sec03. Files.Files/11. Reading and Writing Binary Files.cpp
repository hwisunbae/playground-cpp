//  11. Reading and Writing Binary Files

#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1) //preprocessor directive ; turn off padding

struct Person {
//    string name; not be able to store actual text
    char name [50];
    int age;
    double height;
};

#pragma pack(pop)

int main(){
    
//    cout << sizeof(Person) << endl;
    
    Person someone = {"hwisun", 26, 0.8};
    
    string fileName = "text.bin";
    
    /* Write binary file */
    
    ofstream outFile;
    outFile.open(fileName, ios::binary);
    
    if(outFile.is_open()){
        
        outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        // outFile.write((char *)&someone, sizeof(Person));
        
        outFile.close();
        
    } else {
        cout << "Could not create file" + fileName << endl;
    }
    
    /* Read binary file */
    
    Person someoneElse = {};
    
    ifstream inFile;
    inFile.open(fileName, ios::binary);
    
    if(inFile.is_open()){
        
        inFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        
        inFile.close();
        
    } else {
        cout << "Could not read file" + fileName << endl;
    }
    
    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
    
    
    return 0;
}
