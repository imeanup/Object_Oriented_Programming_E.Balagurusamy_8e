#include<iostream>
using namespace std;

class demo{
    int data;
    public:
        demo(int d){
            data = d;
        }
        void show(){
            cout << "\nValue = " << data << endl;
        }
        friend void operator-(demo);
};

void operator-(demo d){
    d.data = -d.data;
}

int main(){
    demo ob(10);
    ob.show();
    -ob;
    ob.show();
    return 0;
}

/*
Value = 10

Value = 10
*/