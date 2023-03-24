/*
Write a program in which increment in pointer to integer should demonstrate increment in interger using reinterpret_cast operator.
*/

#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *p = &x;
    cout << "x = " << x << endl;
    cout << "p = " << p << endl;

    p = reinterpret_cast<int*>(reinterpret_cast<char*>(p) + sizeof(int));
    cout << "p(after) = " << p << endl;
    cout << "*p(after) = " << *p << endl;
    return 0;
}