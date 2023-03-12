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


/*
a).
If we remove the definition of display_area() from one of the derived classes, 
then the program will still compile and run, but the derived class without 
the display_area() definition will inherit the definition of display_area() 
from the base class. Therefore, when we create an object of the derived class 
without the display_area() definition and call its display_area() function, 
the base class version of display_area() will be called, which will result in 
incorrect output if the derived class represents a different shape with a different 
formula for computing area.

b)
If we declare the display_area() function as virtual in the base class shape, 
then when we create an object of a derived class and call its display_area() function, 
the correct version of display_area() will be called based on the type of the object, 
even if the function is not redefined in the derived class. This ensures that 
the correct formula for computing the area of the shape represented by the object is used, 
even if the object is passed as a pointer or reference to a function that expects a shape object.
*/