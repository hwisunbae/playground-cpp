//  33. Template Functions and Type Inference

#include <iostream>

using namespace std;

template<class T> // <=> template<typename T>
void print(T n){
    cout << "Template version: " << n << endl;
}
void print(int value){
    cout << "Non-template version: " << value << endl;
}

template<class T> // <=> template<typename T>
void show(){
    cout << T() << endl;
}

int main(){

    print<string>("hello");
    print<int>(5);

    print("Hi there");

    print(6);
    print<>(6);

    show<double>();
    // you need to specify what type
    // therefore, can't use <> or no bracket at all

    return 0;
}

/*
 EXERCISE
 ------------------

template<class T>
void print(T value){
    cout << "Template version :";
    cout << value << endl;
}
void print(int num){
    cout << "Non-template version : ";
    cout << num << endl;
}
template<typename T>
void show(){
    cout << T() << endl;
}

int main(){
    print("good");
    print<int>(5);
    
    print(5);
    
    show<double>();
    
    
    return 0;
}
*/
