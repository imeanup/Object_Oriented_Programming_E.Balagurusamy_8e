#include <iostream>
using namespace std;

void fun(){
    cout << "Inside function " << endl;
    throw 10;
}

int main(){
    int b;
    b = 0;
    try{
        if (b != 0)
            throw b;
        try{
            throw b;
        }
        catch(int arg){
            cout << "Caught Exception 1: "<< endl;
            fun();
        }
        catch(...){
            cout << "Caught Exception 2: " << endl;
        }
    }
    catch(int arg){
        cout << "Caught Exception 3: " << endl;
    }

    cout << "End of main" << endl;
    return 0;
}

/*
Caught Exception 1: 
Inside function 
Caught Exception 3: 
End of main
*/