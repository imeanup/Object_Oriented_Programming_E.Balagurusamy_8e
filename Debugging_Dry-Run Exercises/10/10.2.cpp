#include <iostream>
using namespace std;

int main(){
    cout.width(5);
    cout << "100" << endl;
    cout.setf(ios::left);

    cout.width(5);
    cout << "200" << endl;
    cout.setf(ios::right);

    cout << "300" << endl;

    return 0;
}

/*
Will the statement cout.setf(ios::right) work or not?

Yes, will work

  100
200  
300
*/