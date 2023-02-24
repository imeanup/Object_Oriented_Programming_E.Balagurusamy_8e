#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    double r;
    double a;
public:
    Polar(double radius = 0, double angle = 0) : r(radius), a(angle) {}

    // Overload + operator to add two Polar objects
    Polar operator+(const Polar& other) const {
        double x1 = r * cos(a);
        double y1 = r * sin(a);
        double x2 = other.r * cos(other.a);
        double y2 = other.r * sin(other.a);
        double x = x1 + x2;
        double y = y1 + y2;
        double radius = sqrt(x * x + y * y);
        double angle = atan2(y, x);
        return Polar(radius, angle);
    }

    // Getters for radius and angle
    double getRadius() const {
        return r;
    }

    double getAngle() const {
        return a;
    }

    // Setter for radius and angle
    void setPolar(double radius, double angle) {
        r = radius;
        a = angle;
    }
};

int main() {
    Polar p1(3, 45), p2(4, 30);
    Polar p3 = p1 + p2;

    cout << "Polar coordinates of p1: (" << p1.getRadius() << ", " << p1.getAngle() << ")" << endl;
    cout << "Polar coordinates of p2: (" << p2.getRadius() << ", " << p2.getAngle() << ")" << endl;
    cout << "Polar coordinates of p3: (" << p3.getRadius() << ", " << p3.getAngle() << ")" << endl;

    return 0;
}
