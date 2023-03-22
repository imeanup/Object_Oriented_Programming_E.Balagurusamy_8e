// Write a program which uses catch(...) handler.

#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Inside try block" << endl;
        throw 10;
    }
    catch(char c){
        cout << "An exception occurred. Exception character: " << c << endl;
    }
    catch(...){
        cout << "An unknown exception occurred." << endl;
    }
    return 0;
}

/*
Inside try block
An unknown exception occurred.
*/