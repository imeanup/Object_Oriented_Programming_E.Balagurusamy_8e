#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double e = 1.0;
    double term = 1.0; 
    int n = 1; 

    while (abs(term) > 0.0001) { 
        term = term * 1.0 / n; 
        e += term; 
        n++; 
    }

    cout << "e = " << e << endl;

    return 0;
}
