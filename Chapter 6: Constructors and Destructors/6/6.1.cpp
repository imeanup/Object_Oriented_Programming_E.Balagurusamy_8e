#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a; y = b;
        }
    void display(){
        cout << "(" << x <<"," << y << ")\n";
    }
};

int main(){
    Point p1(1, 1);
    Point p2(5, 10);
    cout << "Point p1 = ";
    p1.display();
    cout << "Point p2 = ";
    p2.display();
    return 0;
}

/*
Point p1 = (1,1)
Point p2 = (5,10)
*/