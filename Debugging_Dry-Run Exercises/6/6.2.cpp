#include <iostream>
using namespace std;

class A
{
    int x;
public:
    A(int d){
        x = d;
    }
    ~A(){
        cout << x << endl;
    }
};

int main(){
    A a(50), b(60);
    for (int i = 1; i <= 10; i++){
        A y(i);
    }
    A c(70);
    return 0;
}