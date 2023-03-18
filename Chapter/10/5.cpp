#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Precision set to 3 digits" << endl;
    cout.precision(3);

    cout.width(10);
    cout << "VALUE";
    cout.width(15);
    cout << "SQRT OF VALUE" << endl;

    for (int i = 1; i <= 5; i++){
        cout.width(8);
        cout << i;
        cout.width(13);
        cout << sqrt(i) << endl;
    }

    cout << "Precision set to 5 digits" << endl;
    cout.precision(5);
    cout << "sqrt(10) = " << sqrt(10) << endl;

    cout.precision(0);
    cout << "sqrt(10) = " << sqrt(10) << "default setting" << endl;
    return 0;
}

/*
Program 10.5 Precision Setting with precision()

Precision set to 3 digits
     VALUE  SQRT OF VALUE
       1            1
       2         1.41
       3         1.73
       4            2
       5         2.24
Precision set to 5 digits
sqrt(10) = 3.1623
sqrt(10) = 3default setting
*/