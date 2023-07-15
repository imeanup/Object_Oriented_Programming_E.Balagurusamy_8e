#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double e = 1.0, term = 1.0;
    int i = 1, n;
    double acc = 0.0001;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n)
    {
        term *= i;
        e += 1.0 / term;
        i++;
    }
    cout << "The value of e is " << e << endl;
    return 0;
}
/*
Enter the value of n: 3
The value of e is 2.66667 

Enter the value of n: 4
The value of e is 2.70833
*/