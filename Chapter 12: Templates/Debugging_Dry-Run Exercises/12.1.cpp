#include <iostream>
using namespace std;

class Test{
    int integer;
    float floating;

    public:
        Test(){
            integer = 0;
            floating = 0;
        }

        int getInteger(){
            return integer;
        }

        float getFloating(){
            return floating;
        }
};

int main(){
    Test obj;
    cout << obj.getInteger() << endl;
    cout << obj.getFloating() << endl;
    return 0;
}

/*
0
0
*/