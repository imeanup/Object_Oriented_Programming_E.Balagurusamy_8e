#include <iostream>
using namespace std;

int main(){
    int p, q;
    cout << "Input two integer numbers: ";
    cin >> p >> q;
    try{
        if (q != 0){
            float div = (float)p/q;
            if (div < 0){
                throw 'm'; 
            }
            cout << "p/q = " << div << endl;
        }
        else{
            throw (q);
        }
    }
    catch (int m){
        cout << "Exception caught: Division by zero" << endl;
    }
    catch (char t){
        cout << "Exception Caught: Division is less than 1" << endl;
    }
}