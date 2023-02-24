#include <iostream>
using namespace std;

class FLOAT{
    float data;
    public:
        FLOAT(float d = 0.0) : data(d) {}

        FLOAT operator+(FLOAT other);
        FLOAT operator-(FLOAT other);
        FLOAT operator*(FLOAT other);
        FLOAT operator/(FLOAT other);
        void display(){
            cout << "\nValue = " << data << endl;
        }
};

FLOAT FLOAT :: operator+(FLOAT other){
    return FLOAT(data + other.data);
}

FLOAT FLOAT :: operator-(FLOAT other){
    return FLOAT(data - other.data);
}

FLOAT FLOAT :: operator*(FLOAT other){
    return FLOAT(data + other.data);
}

FLOAT FLOAT :: operator/(FLOAT other){
    if (other.data == 0) {
            cerr << "Error: Division by zero\n";
            return FLOAT();
        }
    return FLOAT(data / other.data);
}

int main(){
    FLOAT a(3.2), b(1.1), c;
    c = a + b;
    c.display();
    c = a - b;
    c.display();
    c = a * b;
    c.display();
    c = a / b;
    c.display();
    return 0;
}

/*
Value = 4.3

Value = 2.1

Value = 4.3

Value = 2.90909
*/