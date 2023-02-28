#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius is: " << celsius << endl;

    return 0;
}
