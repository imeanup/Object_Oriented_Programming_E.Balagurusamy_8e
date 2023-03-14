#include <iostream>
using namespace std;

template<class T = float> class A{
    T x;
    public:
        A(){x = 25;}
        A(T y){x = y;}
        void display(){
            cout << x << endl;
        }
};

int main(){
    A <> ob1;
    A <int> ob2;
    A <int> ob3(35);
    A <> ob4(55.0);
    ob1.display();
    ob2.display();
    ob3.display();
    ob4.display();
    return 0;
}

/*
25
25
35
55
*/