// TODO: Write a program to perform mathematical operations on complex numbers using unary and binary operator overloading.

#include <iostream>
#include <cmath>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+ (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    Complex operator- (Complex const &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    Complex operator* (Complex const &obj) {
        Complex res;
        res.real = real * obj.real - imag * obj.imag;
        res.imag = real * obj.imag + imag * obj.real;
        return res;
    }

    Complex operator/ (Complex const &obj) {
        Complex res;
        double denominator = obj.real * obj.real + obj.imag * obj.imag;
        res.real = (real * obj.real + imag * obj.imag) / denominator;
        res.imag = (imag * obj.real - real * obj.imag) / denominator;
        return res;
    }

    Complex operator- () {
        Complex res;
        res.real = -real;
        res.imag = -imag;
        return res;
    }

    bool operator== (Complex const &obj) {
        return (real == obj.real && imag == obj.imag);
    }

    void display() {
        cout << "(" << real << ", " << imag << "i)" << endl;
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
