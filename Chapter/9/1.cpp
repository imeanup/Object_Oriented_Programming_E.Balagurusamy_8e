#include <iostream>
using namespace std;

int main(){
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout << "a: " << ptr1 << endl;
    cout << "ptr1: " << ptr2 << endl;
    ptr1 += 2;
    cout << "After incrementing the address values: " << ptr1 << endl;
    ptr2 += 2;
    cout << "Address of a: " << ptr1 << endl;
    cout << "Address of ptr1: " << ptr2 << endl;

    return 0;
}