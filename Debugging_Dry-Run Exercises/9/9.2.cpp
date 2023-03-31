#include <iostream>
using namespace std;

int main(){
    int p = 10;
    double q = 20.23;
    int *x = &p;
    double *y = &q;
    // Assigning pointers to variables of the same type
    y = &q;
    x = &p;
    cout << "value 1: " << p << endl;
    cout << "value 2: " << q << endl;
    return 0;
}