#include<iostream>
using namespace std;

class personal{
    public:
        int p();
};
int personal :: p(){
    return 1;
}

int main(){
    personal a;
    // a.x = &personal :: p
    // cout << ((a.*(a.x))());
    cout << a.p()<< endl;
    return 0;
}