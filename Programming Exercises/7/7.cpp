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
    if(f1 == f2){
        cout << "f1 is equal to f2" << endl;
    }
    if(f1 != f2){
        cout << "f1 is not equal to f2" << endl;
    }
    if(f1 >= f2){
        cout << "f1 is greater than or equal to f2" << endl;
    }
    if(f1 <= f2){
        cout << "f1 is less than or equal to f2" << endl;
    }
    return 0;
}
