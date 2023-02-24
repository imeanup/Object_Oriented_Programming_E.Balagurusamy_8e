#include <iostream>

using namespace std;
class demo{
    int data;
    public:
        demo(){}
        demo(int d){
            data = d;
        }
        void show(){
            cout << data << endl;
        }
        void operator++(){
            data++;
        }
        demo & operator = (demo &t){
            t.data = data;
            return t;
        }
};

int main(){
    demo ob1(10), ob2;
    ++ob1;
    ob1 = ob2;
    ob1.show();
    ob2.show();
    return 0;
}