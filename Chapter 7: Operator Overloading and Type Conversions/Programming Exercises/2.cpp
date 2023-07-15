#include <iostream>
#include <cmath>

using namespace std;

class Polar {
    double r;
    double a;
public:
    Polar(double radius = 0, double angle = 0) : r(radius), a(angle) {}

    // Overload + operator to add two Polar objects
    Polar operator+(Polar other){
        double x1 = r * cos(a * M_PI / 180);
        double y1 = r * sin(a * M_PI / 180);
        double x2 = other.r * cos(other.a * M_PI / 180);
        double y2 = other.r * sin(other.a * M_PI / 180);
        double x = x1 + x2;
        double y = y1 + y2;
        double radius = sqrt(x * x + y * y);
        double angle = atan2(y, x) * 180 / M_PI; // https://cplusplus.com/reference/cmath/atan2/
        if (angle < 0){
            angle += 360;
        }
        return Polar(radius, angle);
    }

    // Getters for radius and angle
    double getRadius() {
        return r;
    }

    double getAngle() {
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
