#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, term, sum = 1.0;
    int n = 2;

    cout << "Enter the value of x in radians: ";
    cin >> x;

    double x_squared = x * x;
    double factorial = 2.0;

    while (true) {
        term = pow(-1.0, n) * pow(x, 2.0 * n) / factorial;
        sum += term;
        n++;
        factorial *= (2.0 * n - 1.0) * (2.0 * n - 2.0);
        if (abs(term / sum) < 0.000001) {
            break;
        }
    }

    cout << "cos(" << x << ") = " << sum << endl;

    return 0;
}
