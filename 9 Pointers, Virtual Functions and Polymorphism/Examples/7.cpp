#include <iostream>
using namespace std;
typedef void (*FunPtr)(int, int);

void Add(int i, int j){
    cout << i << "+" << j << " = " << (i+j) << endl;
}

void Substract(int i, int j){
    cout << i << "-" << j << " = " << (i - j) << endl;
}
int main(){
    FunPtr ptr;
    ptr = &Add;
    ptr(1, 2);
    ptr = &Substract;
    ptr(3, 2);
    return 0;
}