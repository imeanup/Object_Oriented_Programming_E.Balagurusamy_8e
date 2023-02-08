#include<iostream>
using namespace std;

void printArea(int x, int y){
    cout << "The area of a square is " << x*y << endl;
}

void printArea(double r){
    cout << "The area of a circle is " << 3.14*r*r << endl;
}

void printArea(int x, int y = 20){
    cout << "The area of a rectangle is "<< x*y << endl;
}

int main(){
    
    // printArea(4);
    printArea(3.0);
    // printArea(10);
    return 0;
}