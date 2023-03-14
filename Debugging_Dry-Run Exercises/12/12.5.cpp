#include <iostream>
using namespace std;

template<class T1 = int, class T2 = int> class Test{
    T1 a;
    T2 b;
    public:
        Test(T1 x, T2 y){
            a = x;
            b = y;
        }
        void show(){
            cout << a  << " and " << b << endl;
        }
};

int main(){
    Test<float, int> test1(1.23, 123);
    Test<float, float> test2(9.99, 12.983);
    test1.show();
    test2.show();
    return 0;
}
/*
*/