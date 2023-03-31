#include <iostream>
using namespace std;

class P{
    public:
        P(){
            cout << "Inside the constructor" << endl;
            try{
                throw "m";
            }
            catch(...){
                cout << "What is this?" << endl;
            }
            cout << "Still inside the constructor" << endl;
        }
        ~P(){
            cout << "Inside the destructor" << endl;
        }
};

int main(){
    try{
        P var;
        throw "Q";
    }
    catch(...){
        cout << "Exception: Ends" << endl;
    }
    cout << "Exit point" << endl;
    return 0;
}

/*
Inside the constructor
What is this?
Still inside the constructor
Inside the destructor
Exception: Ends
Exit point
*/