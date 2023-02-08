#include<iostream>
using namespace std;
class B;

class A{
    int x;
    public:
        void setdata(int d){
            x = d;
        }
        void display(){
            cout << x << endl;
        }
        friend void add(A&, B);
};

class B{
    int x;
    public:
        void setdata(int d){
            x = d;
        }
        void display(){
            cout << x << endl;
        }
        friend void add(A &, B);
};

void add(A & ob_A, B ob_B){
    ob_A.x += ob_B.x;
}

int main(){
    A a;
    B b;
    a.setdata(10);
    b.setdata(10);
    add(a, b);
    a.display();
    b.display();
    return 0;
}

/*
20
10
*/