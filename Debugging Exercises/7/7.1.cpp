#include <iostream>

using namespace std;

class Space{
    int mCount;
    public:
        Space(){
            mCount = 0;
        }
        Space operator++(){
            mCount++;
            return *this;
        }
};

int main(){
    Space objSpace;
    ++objSpace;
    return 0;
}