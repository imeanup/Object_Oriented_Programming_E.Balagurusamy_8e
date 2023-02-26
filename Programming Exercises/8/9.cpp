// TODO: Define all the functions and classes as per the relationship for a shopkeeper of the following type of items,
// a) Two wheeler manual, electric, and automatic
// b) Three wheeler manual, electric and automatic
// c) Four wheeler automatic

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Vehicle class 
class Vehicle{
    public:
        string brand;
        string model;
        int year;
        float price;

        Vehicle(string brand, string model, int year, float price) : brand(brand), model(model), year(year), price(price) {}
};

// TwoWheeler class derived from Vehicle
class TwoWheeler : public Vehicle{
    public:
        string type; // manual, electric, automatic
        TwoWheeler(string b, string m, int y, float p, string t) : Vehicle(b, m, y, p) {
        type = t;
    }
};

// ThreeWheeler class derived from Vehicle
class ThreeWheeler : public Vehicle {
    public:
        string type;    // manual, electric, automatic
        ThreeWheeler(string b, string m, int y, float p, string t) : Vehicle(b, m, y, p) {
            type = t;
        }
};

// FourWheeler class derived from Vehicle
class FourWheeler : public Vehicle {
    public:
        string type;  // automatic
        FourWheeler(string b, string m, int y, float p) : Vehicle(b, m, y, p) {
            type = "automatic";
        }
};

// Shop class to manage the inventory
class Shop{
    public:
        vector<TwoWheeler> twoWheelers;     // inventory of TwoWheelers
        vector<ThreeWheeler> threeWheelers; // inventory of ThreeWheelers
        vector<FourWheeler> fourWheelers;   // inventory of FourWheelers

        void addTwoWheeler(string b, string m, int y, float p, string t) {
            TwoWheeler vehicle(b, m, y, p, t);
            twoWheelers.push_back(vehicle);
        }

        void addThreeWheeler(string b, string m, int y, float p, string t) {
            ThreeWheeler vehicle(b, m, y, p, t);
            threeWheelers.push_back(vehicle);
        }

        void addFourWheeler(string b, string m, int y, float p) {
            FourWheeler vehicle(b, m, y, p);
            fourWheelers.push_back(vehicle);
        }

        void displayTwoWheelers() {
            cout << "TwoWheelers:" << endl;
            for (TwoWheeler vehicle : twoWheelers) {
                cout << vehicle.brand << " " << vehicle.model << " " << vehicle.type << " " << vehicle.price << endl;
            }
            cout << endl;
        }

        void displayThreeWheelers() {
            cout << "ThreeWheelers:" << endl;
            for (ThreeWheeler vehicle : threeWheelers) {
                cout << vehicle.brand << " " << vehicle.model << " " << vehicle.type << " " << vehicle.price << endl;
            }
            cout << endl;
        }

        void displayFourWheelers(){
            cout << "FourWheeler: " << endl;
            for (FourWheeler vehicle : fourWheelers){
                cout << vehicle.brand << " " << vehicle.model << " " << vehicle.type << " " << vehicle.price << endl;
            }
            cout << endl;
        }
};

int main() {
    // create a new shop
    Shop myShop;
    
    myShop.addTwoWheeler("Honda", "Activa", 2021, 72000.00, "automatic");
    myShop.addTwoWheeler("Bajaj", "Pulsar", 2020, 94000.00, "manual");
    
    myShop.addThreeWheeler("Piaggio", "Ape", 2021, 180000.00, "electric");
    myShop.addThreeWheeler("Mahindra", "Jeeto", 2020, 210000.00, "manual");
    
    myShop.addFourWheeler("Maruti Suzuki", "Swift", 2021, 760000.00);
    myShop.addFourWheeler("Hyundai", "Creta", 2020, 1125000.00);
    
    myShop.displayTwoWheelers();
    myShop.displayThreeWheelers();
    myShop.displayFourWheelers();
    
    return 0;
}

/*
g++ -std=c++11 9.cpp -o 9

Alternately, you can replace the range-based for loop with a traditional for loop to avoid the warning. 
Here's an example of how you can modify the displayTwoWheelers() function to use a traditional for loop:

// display all the TwoWheelers in the inventory
void displayTwoWheelers() {
    cout << "TwoWheelers:" << endl;
    for (int i = 0; i < twoWheelers.size(); i++) {
        TwoWheeler vehicle = twoWheelers[i];
        cout << vehicle.brand << " " << vehicle.model << " " << vehicle.type << " " << vehicle.price << endl;
    }
    cout << endl;
}

output:

TwoWheelers:
Honda Activa automatic 72000
Bajaj Pulsar manual 94000

ThreeWheelers:
Piaggio Ape electric 180000
Mahindra Jeeto manual 210000

FourWheeler: 
Maruti Suzuki Swift automatic 760000
Hyundai Creta automatic 1.125e+06
*/