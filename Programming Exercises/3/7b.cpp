#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum = 1.0, term;
    int n = 2, x;
    cout << "Enter the value of x: ";
    cin >> x;
    
    do {
        term = pow(1.0 / x, x);
        sum += term;
        n++;
    } while (abs(term / sum) > 0.000001);

    cout << "The sum of the series is " << sum << endl;

    return 0;
}
