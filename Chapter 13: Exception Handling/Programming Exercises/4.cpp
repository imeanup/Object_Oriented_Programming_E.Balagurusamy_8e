// Write a program that demonstrates how certain exception types are not allowed to be thrown.

#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Inside try inside" << endl;
        throw 10;
    }
    catch(int e){
        cout << "An exception occurred. Exception number: " << e << endl;
    }
    catch(...){
        cout << "An unknown exception occurred." << endl;
    }

    try {
        cout << "Inside second try block" << endl;
        throw "An error occurred";
    }
    catch (const char* msg) {
        cerr << msg << endl; 
    }

    return 0;
}

/*
Inside try inside
An exception occurred. Exception number: 10
Inside second try block
An error occurred
*/