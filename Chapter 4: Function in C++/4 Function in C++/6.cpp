#include<iostream>
using namespace std;

inline int MAX(int a, int b, int c){
    return (a > b) ? ((a > c) ? a:c) : ((b > c) ? b : c);
}

int main(){
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << "The largest of three number is " << MAX(a, b, c) << endl;
    return 0;
}