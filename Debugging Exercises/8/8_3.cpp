#include<iostream>
using namespace std;
class p{
public:
    int i;
};

class q: virtual public p{
    public:
        int j;
};

class r: virtual public p{
    public:
        int k;
};
// public p is virtual for class s
class s: virtual public p, public q, public r{
    public:
        int mul;
};

int main(){
    s obj;
    obj.i = 10;
    obj.j = 20;
    obj.k = 30;
    obj.mul = obj.i * obj.j * obj.k;
    cout << "Mul is: "<< obj.mul << endl;
    return 0;
}