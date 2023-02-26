#include <iostream>
using namespace std;
class dynamic{
    int *p;
    public:
        dynamic(){
            // p = new int; allocate memory dynamically
            p = new int;
            *p = 10;
        }
        dynamic(int v){
            // allocate memory dynamically
            p = new int;

        }
        int display(){
            return (*p);
        }
};

int main(){
    dynamic p1, p2(9);
    cout << "object p1 is: ";
    cout << p1.display();
    cout << "\nobject p2 is: " << p2.display() << endl;
}

/*
object p1 is: 10
object p2 is: 0
*/