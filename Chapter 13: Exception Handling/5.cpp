// Write a program to demonstrate the concepts of rethrowing an exception.

#include <iostream>
using namespace std;

void handleException(){
    try{
        throw 20;
    }
    catch(int e){
        cout << "An exception occurred in handleException(). Exception number: " << e << endl;
        // rethrow exception.
        throw;
    }
}

int main(){
    try{
        handleException();
    }
    catch(int e){
        cout << "An exception occurred in main(). Exception number: " << e << endl;
    }
    return 0;
}

/*
An exception occurred in handleException(). Exception number: 20
An exception occurred in main(). Exception number: 20
*/