/*
Define a namespace named Constants that contains declarations of some constants. 
Write a program that uses the constants defined in the namespace Constants.
*/

#include <iostream>
using namespace std;

namespace Constants {
    const double pi {3.14159};
    const double avogadro {6.0221413e23};
    const double my_gravity {9.2};
}

int main() {
    cout << "Pi: " << Constants::pi << endl;
    cout << "Avogadro's Number: " << Constants::avogadro << endl;
    cout << "myGravity: " << Constants::my_gravity << endl;

    return 0;
}

/*
g++ -std=c++11 filename.cpp -o out_filename

Pi: 3.14159
Avogadro's Number: 6.02214e+23
myGravity: 9.2
*/