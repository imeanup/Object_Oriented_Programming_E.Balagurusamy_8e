#include <iostream>
using namespace std;

class Temp {
private:
    float fahrenheit, celsius;

public:
    void getTemp() {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
    }

    void toCelsius() {
        celsius = (fahrenheit - 32) * 5 / 9;
    }

    void displayTemp() {
        cout << "Temperature in Celsius is: " << celsius << endl;
    }
};

int main() {
    Temp t;
    t.getTemp();
    t.toCelsius();
    t.displayTemp();
    return 0;
}

/*
Enter temperature in Fahrenheit: 98
Temperature in Celsius is: 36.6667
*/