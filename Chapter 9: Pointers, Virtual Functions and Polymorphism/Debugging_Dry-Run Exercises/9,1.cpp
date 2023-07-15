#include <iostream>
using namespace std;

class B{
    float b;
    public:
        B(){
            b = 5.0;
        }
        void show(){
            cout << b << endl;
        }
};

class D : public B{
    float d, d1;
    public:
        D(): B(){
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
    ptr = &ob1;
    ptr->show();
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    return 0;
}