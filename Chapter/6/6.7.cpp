#include <iostream>
using namespace std;

int count_ = 0;

class test{
    public:
        test(){
            count_++;
            cout << "\n\nConstructructor Msg: Object number " << count_ << " created ..";
        }
        ~test(){
            cout << "\n\nDestructor Msg: Object number";
            count_--;
        }
};

int main(){
    cout << "Inside the main block..";
    cout << "\n\nCreating first object T1..";

    test T1;
    {
        // Block 1
        cout << "\n\nInside Block 1..";
        cout << "\n\nCreating two more objects T2 and T3..";
        test T2, T3;
        cout << "\n\nLeaving Block 1..";
    }
    cout << "\n\nBlock inside the main block..";
    return 0;
}

/*
Inside the main block..

Creating first object T1..

Constructructor Msg: Object number 1 created ..

Inside Block 1..

Creating two more objects T2 and T3..

Constructructor Msg: Object number 2 created ..

Constructructor Msg: Object number 3 created ..

Leaving Block 1..

Destructor Msg: Object number

Destructor Msg: Object number

Block inside the main block..

Destructor Msg: Object number%   
*/