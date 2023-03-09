#include <iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout << "\nDisplay base " << endl;
        }
        virtual void show(){
            cout << "\nShow base" << endl;
        }
};

class Derived : public Base{
    public:
        void display(){
            cout << "\nDisplay derived" << endl;
        }
        void show(){
            cout << "\nShow derived" << endl;
        }
};

int main(){
    Base B;
    Derived D;
    Base *bptr;
    cout << bptr << endl;

    cout << "\nbptr points to Base" << endl;
    bptr = &B;
    cout << bptr << endl;
    bptr->display();
    bptr->show();
    cout << "\nbptr points to Derived" << endl;
    bptr = &D;
    cout << bptr << endl;
    bptr->display();
    bptr->show();

    return 0;
}

/*
0x0

bptr points to Base
0x16da8b3a0

Display base 

Show base

bptr points to Derived
0x16da8b398

Display base 

Show derived
*/