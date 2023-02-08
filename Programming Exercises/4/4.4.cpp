#include<iostream>
using namespace std;

void printArea(int x, int y){
    cout << "The area of a rectangle is "<< x*y << endl;
}

void printArea(int a){
    cout << "The area of a square is " << a*a << endl;
}

void printArea(double r){
    cout << "The area of a circle is " << 3.14*r*r << endl;
}

int main(){
    printArea(10, 20);
    printArea(4);
    printArea(3.0);
    return 0;
}