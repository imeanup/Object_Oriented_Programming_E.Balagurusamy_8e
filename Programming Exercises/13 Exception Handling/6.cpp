/*
Write a program with the following:
a) A function to read two double type numbers from keyboard.
b) A function to calculate the division of these two numbers.
c) A try block to throw an exception when a wrong type of data is keyed in.
d) A try block to detect and throw an exception if the condition "divide-by-zero" occurs.
e) Appropriate catch block to handle the exception thrown.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void readNumbers(double a, double b){
    cout << "Enter two numbers: ";
    if(!(cin >> a >> b)){
        throw "Invalid input. Please enter two numbers.";
    }
}

double divideNumbers(double a, double b){
    if (b == 0){
        throw "Division by zero is not allowed";
    }
    return a/b;
}

int main(){
    double a, b;
    try {
        readNumbers(a, b);
        double result = divideNumbers(a, b);
        cout << "The result of dividing " <<a << " by " << b << " is: " << result << endl;
    }
    catch (const char *msg){
        cerr << msg << endl;
    }
    return 0;
}