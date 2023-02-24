#include <iostream>
using namespace std;

class FLOAT{
    float data;
    public:
        FLOAT();
        FLOAT(float d = 0.0) : data(d) {}

        FLOAT operator+(FLOAT other);
        FLOAT operator-(FLOAT other);
        FLOAT operator*(FLOAT other);
        FLOAT operator/(FLOAT other);
        void display(){
            cout << data << endl;
        }
};