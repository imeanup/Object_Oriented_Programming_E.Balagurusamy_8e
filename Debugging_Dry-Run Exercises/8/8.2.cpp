#include <iostream>
using namespace std;

class B{
    int x;
    public:
        B(){cout << "1\t";}
};

class D: public B{
    int y;
    public:
        D(){cout<< "2\t";}
        D(int i){cout << "3\t";}
};

int main(){
    B b;
    // printf("\n");
    D d1;
    // printf("\n");
    D d2(1);
}

/*
1       1       2       1       3 
*/