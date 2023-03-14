// Write a class template that shows the working of a calculator.

#include <iostream>
using namespace std;

template <class T> class Calculator{
    public:
        Calculator(){}
        T add(T a, T b){
            return a+b;
        }
        T subtract(T a, T b){
            return a - b;
        }
        T multiply(T a, T b){
            return a*b;
        }
        T divide(T a, T b){
            return a/b;
        }
};

int main() {
    Calculator<int> intCalc; 
    int a = 5, b = 3;
    cout << "Addition: " << intCalc.add(a, b) << endl; 
    cout << "Subtraction: " << intCalc.subtract(a, b) << endl; 
    cout << "Multiplication: " << intCalc.multiply(a, b) << endl; 
    cout << "Division: " << intCalc.divide(a, b) << endl; 

    Calculator<double> doubleCalc; 
    double c = 3.5, d = 2.0;
    cout << "Addition: " << doubleCalc.add(c, d) << endl; 
    cout << "Subtraction: " << doubleCalc.subtract(c, d) << endl; 
    cout << "Multiplication: " << doubleCalc.multiply(c, d) << endl; 
    cout << "Division: " << doubleCalc.divide(c, d) << endl; 

    return 0;
}
/*
Addition: 8
Subtraction: 2
Multiplication: 15
Division: 1
Addition: 5.5
Subtraction: 1.5
Multiplication: 7
Division: 1.75
*/