#include <iostream>
using namespace std;

void MyClass(){
    try{
        throw "y";
    }
    catch (const char*){
        cout << "Exception inside MyClass" << endl;
        throw;
    }
}

int main(){
    cout << "Now main start\n";
    try{
        MyClass();
    }
    catch(const char*){
        cout << "Exception Inside Main" << endl;
    }
    cout << "Now Main ends" << endl;
    return 0;
}

/*
Now main start
Exception inside MyClass
Exception Inside Main
Now Main ends
*/