// TODO: Write a program to perform mathematical operations on complex numbers using unary and binary operator overloading.

#include <iostream>
#include <cmath>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0), imaginary(0) {}
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator+ (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imaginary = imaginary + obj.imaginary;
        return res;
    }

    Complex operator- (Complex const &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imaginary = imaginary - obj.imaginary;
        return res;
    }

    Complex operator* (Complex const &obj) {
        Complex res;
        res.real = real * obj.real - imaginary * obj.imaginary;
        res.imaginary = real * obj.imaginary + imaginary * obj.real;
        return res;
    }

    Complex operator/ (Complex const &obj) {
        Complex res;
        double denominator = obj.real * obj.real + obj.imaginary * obj.imaginary;
        res.real = (real * obj.real + imaginary * obj.imaginary) / denominator;
        res.imaginary = (imaginary * obj.real - real * obj.imaginary) / denominator;
        return res;
    }

    Complex operator- () {
        Complex res;
        res.real = -real;
        res.imaginary = -imaginary;
        return res;
    }

    bool operator== (Complex const &obj) {
        return (real == obj.real && imaginary == obj.imaginary);
    }

    void display() {
        cout << "(" << real << ", " << imaginary << "i)" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();

    Complex c4 = c1 - c2;
    cout << "c1 - c2 = ";
    c4.display();

    Complex c5 = c1 * c2;
    cout << "c1 * c2 = ";
    c5.display();

    Complex c6 = c1 / c2;
    cout << "c1 / c2 = ";
    c6.display();

    Complex c7 = -c1;
    cout << "-c1 = ";
    c7.display();

    bool isEqual = (c1 == c2);
    cout << "c1 == c2: " << isEqual << endl;

    isEqual = (c1 == Complex(3, 4));
    cout << "c1 == Complex(3, 4): " << isEqual << endl;

    return 0;
}
