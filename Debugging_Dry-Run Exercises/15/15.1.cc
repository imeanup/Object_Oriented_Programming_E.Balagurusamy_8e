#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("ABCDE");
    cout << "Capacity of string: " << s1.capacity() << endl;
    s1.reserve(20);
    cout << "Capacity of string: " << s1.capacity() << endl;
    s1.resize(3);
    cout << "Capacity of string: " << s1.capacity() << endl;
    s1.shrink_to_fit();
    cout << "Capacity of string: " << s1.capacity() << endl;
    s1.reserve(40);
    cout << "Capacity of string: " << s1.capacity() << endl;

    return 0;
}

/*
Capacity of string: 22
Capacity of string: 22
Capacity of string: 22
Capacity of string: 22
Capacity of string: 47
*/