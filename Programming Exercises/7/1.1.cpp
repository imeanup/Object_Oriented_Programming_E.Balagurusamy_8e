#include <iostream>

class FLOAT {
private:
    float data;

public:
    FLOAT(float d = 0.0) : data(d) {}

    FLOAT operator+(const FLOAT& other) const {
        return FLOAT(data + other.data);
    }

    FLOAT operator-(const FLOAT& other) const {
        return FLOAT(data - other.data);
    }

    FLOAT operator*(const FLOAT& other) const {
        return FLOAT(data * other.data);
    }

    FLOAT operator/(const FLOAT& other) const {
        if (other.data == 0) {
            std::cerr << "Error: Division by zero\n";
            return FLOAT();
        }
        return FLOAT(data / other.data);
    }

    void display() const {
        std::cout << data << '\n';
    }
};

int main() {
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
