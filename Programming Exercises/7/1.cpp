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
    return FLOAT(data * other.data);
}

FLOAT FLOAT :: operator/(FLOAT other){
    if (other.data == 0) {
            cerr << "Error: Division by zero\n";
            return FLOAT();
        }
    return FLOAT(data / other.data);
}

int main(){
    FLOAT a(2.5), b(1.5);
    FLOAT c = a + b;
    FLOAT d = a - b;
    FLOAT e = a * b;   
    FLOAT f = a / b;

    c.display();
    d.display();
    e.display();
    f.display();
    return 0;
}

/*
Value = 4.3

Value = 2.1

Value = 4.3

Value = 2.90909
*/