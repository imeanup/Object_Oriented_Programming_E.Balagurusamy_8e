/*
Write a program in which increment in pointer to integer should demonstrate increment in interger using reinterpret_cast operator.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* p = &x;
    cout << "Initial value of x: " << x << endl;
    cout << "Value of p: " << p << endl;
    (*reinterpret_cast<int*>(p))++;
    cout << "Value of x after increment: " << *p << endl;
    
    return 0;
}