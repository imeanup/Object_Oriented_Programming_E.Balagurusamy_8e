#include <iostream>
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
            cout << "Area is undefined for the base class Shape." << endl;
        }
};

class Triangle : public Shape{
    public:
        void display_area(){
            cout << "Area of triangle: " << (0.5 * x * y) << endl;
        }
};

class Rectangle: public Shape{
    public:
        void display_area(){
            cout << "Area of rectangle: " << (x*y) << endl;
        }
};

int main(){
    
    return 0;
}

/*

*/