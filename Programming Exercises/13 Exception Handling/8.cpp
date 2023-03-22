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

int main(){
    try{
        cout << "Inside try block" << endl;
        throw MyException();
    }
    catch(const MyException &e){
        cerr << e.what() << endl;
    }
    return 0;
}

/*
This code is a reference from the following:
https://stackoverflow.com/questions/8152720/correct-way-to-inherit-from-stdexception
*/