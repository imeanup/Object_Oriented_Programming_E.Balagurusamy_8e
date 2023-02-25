#include <iostream>
using namespace std;

class four_seater{
public:
    void Property(){
        cout<<"It has space for four persons" << endl;
    }
};

class four_wheeler{
public:
    void Property(){
        cout << "It runs on four tyres" << endl;
    }
};

class Car: public four_seater, public four_wheeler{};

int main(){
    Car c1;
    c1.four_seater::Property(); // Pg 217
    c1.four_wheeler:: Property();
    return 0;
}