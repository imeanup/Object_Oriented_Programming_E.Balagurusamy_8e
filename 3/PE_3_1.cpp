// Write a function using reference variable as arguments to swap the values of pair of intergers.
#include <iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y;
    std::cout << "Enter value of x: ";
    std::cin >> x;
    std::cout << "Enter value of y: ";
    std::cin >> y;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    return 0;
}