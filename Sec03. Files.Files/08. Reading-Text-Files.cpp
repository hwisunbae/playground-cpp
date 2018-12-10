//  8. Reading Text Files

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream inFile;
    
    string inFileName = "text.txt";
    
    inFile.open(inFileName);
    
    if(inFile.is_open()){
        
        string line;
        
        while (inFile){ // !inFile.eof()
            getline(inFile, line);
            cout << line << endl;
        }
        
        inFile.close();
        
    } else {
        cout << "Could not open file" << inFileName << endl;
    }
   
    return 0;
}

