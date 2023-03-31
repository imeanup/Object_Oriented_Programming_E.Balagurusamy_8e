#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A(){}
        A(int d) { a = d; }
        ~A(){
            cout << "Object of A being deleted" << endl;
        }
        void show_A(){
            cout << a << endl;
        }
};

class B{
    int b;
    public:
        B(){}
        B(int d){ b = d; }
        ~B(){
            cout << "Object of B being deleted" << endl;
        }
        void show_B(){
            cout << b << endl;
        }
};

class C: public A, public B{
    int c;
    public:
        C():A(), B(){}
        C(int d1, int d2, int d3): A(d1), B(d2){
            c = d3;
        }
        ~C(){
            cout << "Object of C being deleted" << endl;
        }
        void show_C(){
            show_A();
            show_B();
            cout << c << endl;
        }
};

int main(){
    C *p;
    p = new C(10, 20, 30);
    p -> show_C();
    delete p;
    return 0;
}

/*
10
20
30
Object of C being deleted
Object of B being deleted
Object of A being deleted
*/