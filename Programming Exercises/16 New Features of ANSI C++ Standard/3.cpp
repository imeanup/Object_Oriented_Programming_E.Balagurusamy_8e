/*
Write a program to demonstrate function overloading.
*/

#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

double add(double x, double y) {
    return x + y;
}

int main() {
    cout << add(3, 4) << '\n';
    cout << add(3.0, 4.0) << '\n';

    return 0;
}

/*
7
7
*/