// Write a program containing a possible exception. Use a try block to throw it and a catch block to handle it properly.

#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Inside try block" << endl;
        throw 10;
    }
    catch(int e){
        cout << "An exception occurred. Exception number: " << e << endl;
    }
    return 0;
}

/*
Inside try block
An exception occurred. Exception number: 10
*/