#include<iostream>
using namespace std;

int p;
int &display();
int main(){
    display() = 5;
    cout << p << endl;
    return 0;
}

int &display(){
    // return 2; /*return a temporary value as a reference. return type is int & */
    return p;
}