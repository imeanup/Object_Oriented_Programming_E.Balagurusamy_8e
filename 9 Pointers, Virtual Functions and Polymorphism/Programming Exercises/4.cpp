#include <iostream>
using namespace std;

class MyClass{
    private:
        int x;
    public:
        MyClass(int x){
            this->x = x;
        }
        int getData(){
            return x;
        }
        void setData(int x){
            this->x = x;
        }

        void printData(){
            cout << "Value: " << x << endl;
        }
};

void swap(MyClass *x, MyClass *y){
    int tmp = x->getData();
    x->setData(y->getData());
    y->setData(tmp);
}

int main(){
    MyClass a(10);
    MyClass b(20);
    cout << "Before Swapping:"<< endl;
    a.printData();
    b.printData();

    swap(a, b);
    cout << "After Swapping" << endl;
    a.printData();
    b.printData();
    return 0;
}

/*
Before Swapping:
Value: 10
Value: 20
After Swapping
Value: 20
Value: 10
*/