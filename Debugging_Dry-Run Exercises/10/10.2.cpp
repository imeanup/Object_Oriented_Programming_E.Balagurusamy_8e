#include <iostream>
using namespace std;

int main(){
    cout.width(5);
    cout << "99" << endl;

    cout.setf(ios::left);
    cout.width(5);
    cout << "99" << endl;

    cout.setf(ios::right);
    cout << "99" << endl;

    return 0;
}

/*
Will the statement cout.set(ios::right) work or not?
*/