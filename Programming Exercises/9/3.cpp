#include <iostream>
using namespace std;

class shape {
protected:
    double x, y;
public:
    void get_data(double i, double j = 0) {
        x = i;
        y = j;
    }
    virtual void display_area() {
        cout << "Area of shape is undefined." << endl;
    }
};

class triangle : public shape {
public:
    void display_area() {
        double area = 0.5 * x * y;
        cout << "Area of triangle is: " << area << endl;
    }
};

class rectangle : public shape {
public:
    void display_area() {
        double area = x * y;
        cout << "Area of rectangle is: " << area << endl;
    }
};

class circle : public shape {
public:
    void display_area() {
        double area = 3.14159 * x * x;
        cout << "Area of circle is: " << area << endl;
    }
};

int main() {
    shape *ptr;
    triangle t;
    rectangle r;
    circle c;
    ptr = &t;
    ptr->get_data(5, 10);
    ptr->display_area();
    ptr = &r;
    ptr->get_data(5, 10);
    ptr->display_area();
    ptr = &c;
    ptr->get_data(5);
    ptr->display_area();
    return 0;
}
