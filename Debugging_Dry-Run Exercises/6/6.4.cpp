#include <iostream>
using namespace std;

class demo{
    static int cnt;
    int data;
    public:
        demo(int d){
            data = d;
            cnt++;
        }
        ~demo(){
            cnt--;
        }
        void show(){
            cout << "\nValues " << data << "\t" << cnt;
        }
        static void fun(demo &ob){
            demo temp(ob.data);
            temp.show();
            ob.show();
        }
};

int demo :: cnt;
int main(){
    demo ob1(20);
    ob1.show();
    demo::fun(ob1);
    ob1.show();
    demo ob2(30);
    ob1.show();
    ob2.show();
    return 0;
}

/*
Values 20       1
Values 20       2
Values 20       2
Values 20       1
Values 20       2
Values 30       2
*/