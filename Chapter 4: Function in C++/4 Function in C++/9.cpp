#include<iostream>
using namespace std;

const double pi = 22.0/7.0;

double area(double r){
    return pi * (r) * r;
}

double area(double b, double h){
    return (0.5)*b*h;
}

int main(){
    double r, b;
    cout << "Enter the radius of a circle: " << endl;
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;
    cout << "Enter base and height of a triangle: " << endl;
    cin >> b >> r;
    cout << "Area of Triangle: " << area(b, r) << endl;
    return 0;
}