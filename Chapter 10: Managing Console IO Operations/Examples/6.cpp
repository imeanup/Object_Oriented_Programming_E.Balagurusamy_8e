#include <iostream>
using namespace std;

int main(){
    float pi = 22.0/7.0;
    int i;
    cout << "Value of Pi: " << endl;
    for (i = 1; i <= 11; i++){
        cout.width(i+1);
        cout.precision(i);
        cout << pi << endl;
    }
    return 0;
}

/*
Program 10.6 Width and Precision Manipulators

Value of Pi: 
 3
3.1
3.14
3.143
3.1429
3.14286
3.142857
3.1428571
3.14285707
3.142857075
3.1428570747
*/