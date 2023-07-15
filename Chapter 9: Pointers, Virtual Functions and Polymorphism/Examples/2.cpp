#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    cout << "The value of a is: " << *ptr << endl; // cout << ptr; result pointer address
    *ptr = *ptr + a;
    cout << "The revised value of a is: " << *ptr << endl;
    return 0;
}

/*
The value of a is: 10
The revised value of a is: 20
*/