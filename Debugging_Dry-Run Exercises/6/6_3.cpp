#include <iostream>
using namespace std;
class des{
    public:
        des(int x){
            cout << "start value " << x << endl;
        }
        // destructor never takes an argument
        ~des(){
            cout << "hi" << endl;
        }
};

int main(){
    des d1(9);
    return 0;
}
/*
start value 9
hi
*/