#include <iostream>

using namespace std;

class demo{
    int data;
    friend void operator-(demo &);
    public:
        demo(int d){
            data = d;
        }
        void show(){
            cout << "\nValue = " << data << endl;
        }
};

void operator-(demo &d){
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

 Value = -10
*/