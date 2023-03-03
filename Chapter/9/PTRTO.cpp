#include <iostream>
using namespace std;

int main(){
    int var1, var2;
    int *ptr;

    ptr = &var1;
    *ptr = 37;
    var2 = *ptr;

    cout << var2 << endl;
    return 0;
}

/*
This is the documnet which we will be covering during the class of the semester of 
the year and will learn how to modify the content of the book as this is interseting to have a 
detail analysis and study guid for the book
*/