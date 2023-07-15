#include <iostream>
using namespace std;

int main(){
    int a, b, r;
    a = 25;
    b = 0;
    try{
        try{
            if (b == 0){
                throw 0;
            }
            r = a/b;
            cout << "Result = " << r << endl;
        }
        catch(int arg){
            cout << "Caught Exception 1: " << arg << endl;
            throw;
        }
    }
    catch(int arg){
        cout << "Caught Exception 2: " << arg << endl;
    }
    cout << "End of program" << endl;
    return 0;
}

/*
Caught Exception 1: 0
Caught Exception 2: 0
End of program
*/