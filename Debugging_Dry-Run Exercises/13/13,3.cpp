#include <iostream>
using namespace std;

int main(){
    int a, b, r;
    a = 10;
    b = 0;
    try{
        if (b == 0){
            throw 0.0;
        }
        r = a/b;
        cout << "Result = " << r << endl;
    }
    catch(int arg){
        cout << "Exception caught first" << endl;
    }
    catch(float arg){
        cout << "Exception caught second" << endl;
    }
    catch(double arg){
        cout << "Exception caught third" << endl;
    }
    cout << "End of program" << endl;
    return 0;
}

/*
Exception caught third
End of program
*/