// TODO: Write a program to compare two fractional numbers by overloading the relational operator (==, !=, >=, <=). 

#include <iostream>
using namespace std;

class Fraction{
    int x, y;
    public:
        Fraction();
        Fraction(int num, int deno){
            x = num;
            y = deno;
        }
        bool operator== (const Fraction &f);
        bool operator!= (const Fraction &f);
        bool operator>= (const Fraction &f);
        bool operator<= (const Fraction &f);

        void display(){
            cout << x << "/" << y << endl;
        }
};

Fraction::Fraction(){
    x = 0;
    y = 1;
}

bool Fraction::operator==(const Fraction &f){
    return (x*f.y == y*f.x);
}

bool Fraction::operator!=(const Fraction &f){
    return (x*f.y != y*f.x);
}

bool Fraction::operator>=(const Fraction &f){
    return (x*f.y >= y*f.x);
}

bool Fraction::operator<=(const Fraction &f){
    return (x*f.y <= y*f.x);
}

int main(){
    Fraction f1(2,3), f2(4,6);
    cout << "Comparing fractions:" << endl;
    cout << "f1 = ";
    f1.display();
    cout << endl;
    cout << "f2 = ";
    f2.display();
    cout << endl << endl;

    bool isEqual = (f1 == f2);
    cout << "f1 == f2: " << isEqual << endl;

    isEqual = (f1 != f2);
    cout << "f1 != f2: " << isEqual << endl;

    bool isGreaterOrEqual = (f1 >= f2);
    cout << "f1 >= f2: " << isGreaterOrEqual << endl;

    bool isLessOrEqual = (f1 <= f2);
    cout << "f1 <= f2: " << isLessOrEqual << endl;

    return 0;
}
