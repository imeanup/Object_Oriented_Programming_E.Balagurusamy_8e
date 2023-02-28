#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, term, sum = 0.0;
    int n = 0;

    cout << "Enter the value of x in radians: ";
    cin >> x;

    // The nth term of the series using the formula (-1)^n * x^(2n+1) / (2n+1)!.
    do{
        term = pow(-1, n)* pow(x, 2*n+1)/tgamma(2*n+2);
        sum += term;
        n++;
    }
    while (abs(term/sum) > 0.000001);

    cout << "sin(" << x << ") = " << sum << endl;

    return 0;
}

