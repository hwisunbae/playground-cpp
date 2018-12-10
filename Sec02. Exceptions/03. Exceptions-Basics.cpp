
#include <iostream>

using namespace std;

void mightGoWrong(){
    bool error1 = true;
    bool error2 = true;
    if(error1){
        throw "something went wrong";
    } // as soon as first exception has been thrown, go to the main
    if(error2){
        throw string("something else went wrong");
    }
}

void useMightGoWrong(){
    mightGoWrong();
}

int main(){
    try{
        useMightGoWrong();
    }
    catch(int e){
        cout << "error code: " << e << endl;
    }
    catch(char const * e){
        cout << "error message: " << e << endl;
    }
    catch(string e){
        cout << "string error message : " << e << endl;
    }
    cout << "still running" << endl;
    return 0;
}

/*
 EXERCISE
 --------------------
 
 void mightGoWrong () {
 bool one = true;
 bool two = true;
 if(one){
 throw "GO WRONG";
 }
 if(two){
 throw string("go wrong");
 }
 }
 
 int main(){
 try {
 mightGoWrong();
 }
 catch(const char* e){
 cout << e << endl;
 }
 catch(string e){
 cout << e << endl;
 }
 catch(int e){
 cout << "error code: " << e << endl;
 }
 catch(double e){
 cout << "precise error code: " << e << endl;
 }
 cout << "still running" << endl;
 
 return 0;
 }
 */
