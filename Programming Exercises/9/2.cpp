#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    protected:
        double x, y;
    public:
        Shape(double x = 0, double y = 0){
            this->x = x;
            this->y = y;
        }
        virtual void get_data(){
            cout << "Enter the value: ";
            cin >> x >> y;
        }
        virtual void display_area(){
            cout << "Area is undefined for the given Shape." << endl;
        }
};

class Circle : public Shape{
    public:
        void get_data(){
            cout << "Enter the radius of the circle: ";
            cin >> x;
            y = 0;
        }
        void display_area(){
            double area = M_PI * x * x;
            cout << "Area of circle: " << area << endl;
        }
};

class Triangle : public Shape{
    public:
        void get_data(){
            cout << "Enter the height and base of the triangle: ";
            cin >> x >> y;
        }
        void display_area(){
            cout << "Area of triangle: " << (0.5 * x * y) << endl;
        }
};

class Rectangle: public Shape{
    public:
        void get_data(){
            cout << "Enter the length and breadth of the rectangle: ";
            cin >> x >> y;
        }
        void display_area(){
            cout << "Area of rectangle: " << (x*y) << endl;
        }
};

int main(){
    Shape* shapePtr;
    Triangle t;
    Rectangle r;
    Circle c;

    shapePtr = &t;
    shapePtr->get_data();
    shapePtr->display_area();

    shapePtr = &r;
    shapePtr->get_data();
    shapePtr->display_area();

    shapePtr = &c;
    shapePtr->get_data();
    shapePtr->display_area();
    return 0;
}

/*
Enter the height and base of the triangle: 3 4
Area of triangle: 6
Enter the length and breadth of the rectangle: 3 4
Area of rectangle: 12
Enter the radius of the circle: 3  
Area of circle: 28.2743
*/