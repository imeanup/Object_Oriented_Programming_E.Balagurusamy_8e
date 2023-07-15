// Write a program that illustrates the application of multiple catch statements.

#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Inside try block" << endl;
        throw 'a';
    }
    catch (int e) {
        cout << "An exception occurred. Exception number: " << e << endl;
    }
    catch (char c) {
        cout << "An exception occurred. Exception character: " << c << endl;
    }
    return 0;
}

/*
Inside try block
An exception occurred. Exception character: a
*/
