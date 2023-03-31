#include <iostream>
#include <cstring>

using namespace std;

class String{
    char *name;
    int length;

public:
    String(){
        length = 0;
        name = new char[length + 1];
    }
    String(const char *s){
        length = strlen(s);
        name = new char[length + 1];

        strcpy(name, s);
    }
    void display(){
        cout << name << "\n";
    }
    void join(String &a, String &b);
};

void String :: join(String &a, String &b){
    length = a.length + b.length;
    delete[] name;
    name = new char[length + 1];

    strcpy(name, a.name);
    strcat(name, b.name);
}

int main(){
    const char *first = "Joseph ";
    String name1(first), name2("Louis "), name3 ("Lagrange"), s1, s2;

    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();

    return 0;
}

/*
Joseph 
Louis 
Lagrange
Joseph Louis 
Joseph Louis Lagrange
*/

/*
Make the following changes while declaring the String(char *s) to String(const char *s). Else, below error:

6.5.cpp:37:19: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
    char *first = "Joseph ";
                  ^
6.5.cpp:38:32: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
    String name1(first), name2("Louis"), name3 ("Lagrange"), s1, s2;
                               ^
6.5.cpp:38:49: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
    String name1(first), name2("Louis"), name3 ("Lagrange"), s1, s2;

PS: The code in the book is not updated to the latest C++ standard.
*/