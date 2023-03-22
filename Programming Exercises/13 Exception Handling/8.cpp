// Write a program to create your own exception by inheriting exception class functionality.

#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception{
    public:
        const char *what() const noexcept override{
            return "My custom exception";
        }
};