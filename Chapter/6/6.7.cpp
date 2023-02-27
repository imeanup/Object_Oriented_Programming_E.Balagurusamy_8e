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
