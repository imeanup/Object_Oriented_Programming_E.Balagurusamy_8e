#include <iostream>
using namespace std;
class construct
{
    int p, q;
public:
    construct(int x, int y){
        p = x;
        q = y;
    }
    void display(){
        cout << p << "\n" << q << "\n";
    }
};

int main(){
    construct item1(10, 20), item2 = construct(30, 40);
    item1.display();
    item2.display();
    return 0;
}

/*
10
20
30
40
*/