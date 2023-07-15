#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A() {}
        A(int d) { a = d; }
        ~A(){
            cout<< endl << "Object A being destroyed";
        }
        void show(){
            cout << a << endl;
        }
};

class B: public A{
    int b;
    public:
        B(): A(){

        }
        B(int d, int d1) : A(d){
            b = d1;
        }
        ~B(){
            cout << endl << "Object B is being destroyed";
        }
        void show(){
            A::show();
            cout << b << endl;
        }
};

int main(){
    B *p;
    p = new B(20, 30);
    (*p).show();
    delete p;
    return 0;
}

/*
20
30

Object B is being destroyed
Object A being destroyed
*/