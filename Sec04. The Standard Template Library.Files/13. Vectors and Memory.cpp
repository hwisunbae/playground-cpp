  13. Vectors and Memory

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<double> numbers(0);
    cout << "size: " << numbers.size()  << endl;

    int capacity = numbers.capacity();
    cout << "capacity: " << capacity << endl;
    for(int i = 0; i < 10000; i ++){
        if (numbers.capacity() != capacity){
            capacity = numbers.capacity();
            cout << "capacity: " << capacity << endl;
        }
        numbers.push_back(i);
    }

    numbers.reserve(1000000);

//    numbers.resize(100);
//    cout << numbers[2] << endl;

//    numbers.clear(); //size 0, capacity the same as before
    cout << "size: " << numbers.size()  << endl;
    cout << "capacity: " << numbers.capacity() << endl;

    return 0;
}

/* last lecture
-------------------


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    
    string file = "status.txt";
    
    input.open(file);
    
    if(!input.is_open()){
        return 1;
    }
    
    int num;
    
    while(input){
        string line;
        getline(input, line, ':');
        input >> num;
        
        input >> ws;
        if (!input){
            break;
        }
        
        cout << "'" << line << "'" << "--" << "'" << num << "'" << endl;
        
    }

    return 0;
}
 */
