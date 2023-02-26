#include <iostream>
using namespace std;

class pract{
    int a, b, c;
    public:
        pract(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }
        void show(){
            cout << "\nValues " << a << "\t" << b << "\t" << c << endl;
        }
};

int main(){
    pract Object(10, 20, 30);
    pract Object2 = Object;
    pract Object3 = Object;
    Object3.show();
    return 0;
}

/*Values 10      20       30*/