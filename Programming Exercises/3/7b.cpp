#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum = 1.0, term, n = 2.0;

    cout << "Enter the number of terms: ";
    int num_terms;
    cin >> num_terms;

    for (int i = 1; i <= num_terms; i++) {
        term = pow(1.0 / n, n);
        sum += term;
        n++;
    }

    cout << "The sum of the series is " << sum << endl;

    return 0;
}
