#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, term, sum = 0.0;
    int n = 0;

    cout << "Enter the value of x in radians: ";
    cin >> x;

    do{
        term = pow(-1, n)* pow(x, 2*n+1)/tgamma(2*n+2);
    }
    while (abs(term/sum) > 0.000001);
}