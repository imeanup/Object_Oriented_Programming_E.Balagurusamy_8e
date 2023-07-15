#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer value: ";
    cin >> num;

    cout << "The hexadecimal, octal and decimal representation of " << num << " is: ";

    cout.setf(ios::hex, ios::basefield);
    cout << num << ", ";

    cout.setf(ios::oct, ios::basefield);
    cout << num << " and ";

    cout.setf(ios::dec, ios::basefield);
    cout << num << " respectively" << endl;
    return 0;
}


/*
Program 10.8 Manipulation of Flag and Bit Fields

Enter an integer value: 92
The hexadecimal, octal and decimal representation of 92 is: 5c, 134 and 92 respectively
*/