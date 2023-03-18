#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout.setf(ios::showpoint);
    cout << setw(5) << "n" << setw(15) << "Inverse of n" << setw(15) << "Sum of terms" << endl;

    double term, sum = 0;

    for (int n = 1; n <= 10; n++){
        term = 1.0/float(n);
        sum += term;

        cout << setw(5) << n << setw(14) << setprecision(4) << setiosflags(ios::scientific) << term << setw(13) << resetiosflags(ios:: scientific)
            << sum << endl;
    }
    return 0;
}

/*
Program 10.10 Fromatting with Manipulator

    n   Inverse of n   Sum of terms
    1    1.0000e+00        1.000
    2    5.0000e-01        1.500
    3    3.3333e-01        1.833
    4    2.5000e-01        2.083
    5    2.0000e-01        2.283
    6    1.6667e-01        2.450
    7    1.4286e-01        2.593
    8    1.2500e-01        2.718
    9    1.1111e-01        2.829
   10    1.0000e-01        2.929
*/