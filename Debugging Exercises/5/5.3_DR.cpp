#include<iostream>
using namespace std;

class A{
    int x;
    A *p;
    public: 
        void setdata(int d, A *pb){
            x = d;
            p = pb;
        }
        void display(){
            cout << x << " " << (*p).x << endl;
        }
};

int main(){
    A a, b;
    a.setdata(10, &b);
    b.setdata(20, &a);
    a.display();
    b.display();
    return 0;
}

/*
10 20
20 10
*/