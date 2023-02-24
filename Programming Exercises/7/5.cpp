//TODO: Define two classes Polar and Rectangle to represent points in the polar and rectangle systems. 
// Using conversion routines to convert from one system to the other.


#include <iostream>
#include <cmath>

using namespace std;

class Polar {
private:
    double r, theta;
public:
    Polar(double r, double theta) : r(r), theta(theta) {}
    double getR() const { return r; }
    double getTheta() const { return theta; }
    void setR(double r) { this->r = r; }
    void setTheta(double theta) { this->theta = theta; }
    void print() const {
        cout << "(" << r << ", " << theta << ")";
    }
    Rectangle toRectangle() const {
        double x = r * cos(theta);
        double y = r * sin(theta);
        return Rectangle(x, y);
    }
};

class Rectangle {
private:
    double x, y;
public:
    Rectangle(double x, double y) : x(x), y(y) {}
    double getX() const { return x; }
    double getY() const { return y; }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    void print() const {
        cout << "(" << x << ", " << y << ")";
    }
    Polar toPolar() const {
        double r = sqrt(x*x + y*y);
        double theta = atan2(y, x);
        return Polar(r, theta);
    }
};

int main() {
    Polar p(1, M_PI/4);
    p.print();
    cout << " in rectangular coordinates is ";
    p.toRectangle().print();
    cout << endl;

    Rectangle r(sqrt(2), sqrt(2));
    r.print();
    cout << " in polar coordinates is ";
    r.toPolar().print();
    cout << endl;

    return 0;
}
