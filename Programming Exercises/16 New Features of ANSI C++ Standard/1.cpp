/*
Write a program in which increment in pointer to integer should demonstrate increment in interger using reinterpret_cast operator.
*/

#include <iostream>

int main() {
    int x = 10;
    int* p = &x;

    std::cout << "x = " << x << std::endl;
    std::cout << "p = " << p << std::endl;

    // Increment p using reinterpret_cast
    p = reinterpret_cast<int*>(reinterpret_cast<char*>(p) + sizeof(int));

    std::cout << "p (after increment) = " << p << std::endl;
    std::cout << "*p (after increment) = " << *p << std::endl;

    return 0;
}
