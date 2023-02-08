#include<iostream>
using namespace std;

void printArea(int x, int y){
    cout << "The area of a rectangle is "<< x*y << endl;
}

void printArea(int r){
    cout << "The area of a circle is " << 3.14*r*r << endl;
}

int main(){
    printArea(10, 20);
    printArea(3);
    return 0;
}