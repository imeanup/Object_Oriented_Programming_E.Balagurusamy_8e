#include<iostream>
using namespace std;

int &fun(int &);
int &fun(int &x){
    x++;
    return x;
}

int main(){
    int a = 5;
    fun(a) = a;
    cout << a << endl;
    fun(a) = ++a;
    cout << a << endl;
    fun(a) = a++; //value is incremented by 1 i.e. 7 but a++ return the original value of a i.e. 6 which is unchanged.
    cout << a << endl;
    return 0;
}
/*
5
6
6
*/