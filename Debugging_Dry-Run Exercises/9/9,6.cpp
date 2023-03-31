#include <iostream>
using namespace std;

class B{
    float b;
    public:
        B(){
            b = 5.0;
        }
        virtual void show(){
            cout << b << endl;
        }
};

class D:public B{
    float d;
    float d1;
    public:
        D(): B(){
            // B::B();
            d = 10.0;
            d1 = 20.0;
        }
        void show(){
            cout << d << endl;
        }
};

int main(){
    B ob, *ptr;
    D ob1;
    ptr = &ob;
    cout << sizeof(*ptr) << endl;
    ptr = &ob1;
    cout << sizeof(*ptr) << endl;
    return 0;
}

/*
16
16
*/