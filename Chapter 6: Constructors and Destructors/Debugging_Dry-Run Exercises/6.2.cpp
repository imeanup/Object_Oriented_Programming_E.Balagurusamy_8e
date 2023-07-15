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

/*
actual (without endl): 12345678910706050% 

1
2
3
4
5
6
7
8
9
10
70
60
50
*/