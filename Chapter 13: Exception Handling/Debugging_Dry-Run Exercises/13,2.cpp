#include <iostream>
using namespace std;

int main(){
    int a, b, r;
    a = 10;
    b = 0;
    try{
        if (b == 0){
            throw 0;
        }
        r = a/b;
        cout << "Result = " << r << endl;
    }
    catch(int arg1){
        cout << "Exception caught first" << endl;
    }
    catch(int arg2){
        cout << "Exception caught second" << endl;
    }
    cout << "End of program" << endl;
    return 0;
}

/*
Two catch blocks that catch exceptions of the same type (int).

13,2.cpp:18:11: warning: exception of type 'int' will be caught by earlier handler [-Wexceptions]
    catch(int arg2){
          ^
13,2.cpp:15:11: note: for type 'int'
    catch(int arg1){
*/