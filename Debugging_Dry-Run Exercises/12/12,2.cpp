#include <iostream>

using namespace std;

template<class T = int> void fun(T a, int b){
    cout << "Fun1: " << a << " " << b << endl;
}

template<class T1, class T2> void fun(T1 a, T2 b){
    cout << "Fun2: " << a << " " << b << endl;
}

void fun(int a = 30, int b = 35){
    cout << "Fun3: " << a << " " << b << endl;
}

int main(){
    fun(25, 28);
    fun(25, 28.0);
    fun(25.0, 28);
    fun();
    fun(45);
    return 0;
}

/*
Fun3: 25 28
Fun2: 25 28
Fun1: 25 28
Fun3: 30 35
Fun3: 45 35
*/