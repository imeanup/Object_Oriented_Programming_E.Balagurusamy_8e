#include <iostream>
using namespace std;

int main(){
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    int i;
    cout << "The array values are:" << endl;
    for (i = 0; i < 5; i++){
        cout << num[i] << endl;
    }
    ptr = num;
    cout << "Value of ptr:      " << *ptr << endl;
    ptr++;
    cout << "Value of ptr++:    " << *ptr << endl;
    ptr--;
    cout << "Value of ptr--:    " << *ptr << endl;
    ptr = ptr + 2;
    cout << "Value of ptr + 2:  " << *ptr << endl;
    ptr = ptr - 1;
    cout << "Value of ptr - 1:  " << *ptr << endl;
    ptr += 3;
    cout << "Value of ptr+=3:   " << *ptr << endl;
    ptr -= 2;
    cout << "Value pf ptr -= 2: " << *ptr << endl;
    return 0;
}

/*
The array values are:
56
75
22
18
90
Value of ptr:      56
Value of ptr++:    75
Value of ptr--:    56
Value of ptr + 2:  22
Value of ptr - 1:  75
Value of ptr+=3:   90
Value pf ptr -= 2: 22
*/