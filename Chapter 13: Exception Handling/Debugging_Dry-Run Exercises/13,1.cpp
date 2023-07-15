#include <iostream>
using namespace std;

int main(){
    int a, b, r;
    a = 10;
    b = 0;
    try{
        if (b == 0){
            throw "divisor is 0";
        }
        r = a/b;
        cout << "Result = " << r << endl;
    }
    catch(int arg){
        cout << "Exception caught second" << endl;
    }
    cout << "End of program" << endl;
    return 0;
}

// terminating with uncaught exception of type char const*