#include <iostream>
using namespace std;

class test{
    int *a;
    public:
        test(int size){
            a = new int[size];
            cout << "\n\nConstructructor Msg: Integer array of size " << size << " created ..";
        }
        ~test(){
            delete a;
            cout << "\n\nDestructor Msg: Freed up the memory allocated for integer array";
        }
};

int main(){
    int a;
    cout << "Enter the size of the array..";
    cin >> a;
    cout << "\n\nCreating an object of test class..";
    test T(a);
    cout << "\n\nPress any key to end the program..";
    return 0;
}

/*
Enter the size of the array..5


Creating an object of test class..

Constructructor Msg: Integer array of size 5 created ..

Press any key to end the program..

Destructor Msg: Freed up the memory allocated for integer array
*/