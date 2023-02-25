#include <iostream>
using namespace std;
int a,b,c,d,e;

class A{
    protected:
    public:
        void value_a_b(){
            a = 2; b = 2;
        }
};

class B: public A{
    protected:
    public:
        void value_c(){
            c = 2;
        }
};

class C{
    protected:
    public:
        void value_d(){
            d = 3;
        }
};

class D: public B, public C{
    protected:
    public:
        void result(){
            value_a_b();
            value_c();
            value_d();
            e = a * b * c * d;
            cout << "\nMultiplication is : " << c << endl;
        }
};

int main(){
    D d1;
    d1.result();
    return 0;
}