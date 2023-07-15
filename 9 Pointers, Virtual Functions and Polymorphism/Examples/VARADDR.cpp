#include <iostream>
using namespace std;

int main(){
    int var1 = 11;
    int var2 = 22;
    int var3 = 33;

    cout << &var1 << endl
        << &var2 << endl 
        << &var3 << endl;

    return 0;
}

/*
0x16bbaf398
0x16bbaf394
0x16bbaf390
*/