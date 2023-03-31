#include <iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout << "print version of base class" << endl;
        }

        void show(){
            cout << "show version of base class" << endl;
        }
};

class Dervied:public Base{
    public:
        void print(){
            cout << "print version of dervied class" << endl;
        }
        void show(){
            cout << "show version of derviced class" << endl;
        }
};

int main(){
    Base *ptr;
    Dervied x;
    ptr = &x;
    ptr->print();
    ptr->show();
    return 0;
}

/*
print version of dervied class
show version of base class
*/