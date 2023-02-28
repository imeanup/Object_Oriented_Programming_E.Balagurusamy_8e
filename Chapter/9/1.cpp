#include <iostream>
using namespace std;

int main(){
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout << "a: " << ptr1 << endl;
    cout << "ptr1: " << ptr2 << endl;
    
    cout << "After incrementing the address values: " << endl;
    ptr1 += 2;
    cout << "Address of a: " << ptr1 << endl;
    ptr2 += 2;
    cout << "Address of ptr1: " << ptr2 << endl;

    return 0;
}