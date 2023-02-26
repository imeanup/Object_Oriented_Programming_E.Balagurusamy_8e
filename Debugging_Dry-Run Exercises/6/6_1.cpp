#include <iostream>
using namespace std;
class cube{
    private:
        int length;
        int breadth;
        int width;

    public:
        cube(): length(5), breadth(5), width(5) {}
        cube(int l, int b): length(l), breadth(b) {}
        int area_of_cube(){
            return length*breadth;
        }
        int volume_of_cube(){
            return length * breadth * width;
        }
        void display(int temp){
            cout << temp << endl;
        }
};

int main()
{
    cube A1(4,3), B1, A2(4,4); // cube will take either no argument or 2.
    int temp;
    cout << "Default Area " << endl;
    temp = A1.area_of_cube();
    A1.display(temp);
    cout << "Default volume: " << endl;
    temp = B1.volume_of_cube();
    A1.display(temp);
    cout << "Area when argument is 4" << endl;
    temp = A2.area_of_cube();
    B1.display(temp);
    return 0;
}

/*

*/