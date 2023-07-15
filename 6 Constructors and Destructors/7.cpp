#include <iostream>
#include <string>
using namespace std;

class Cars{
    private:
        string brand;
        string model;
        int year;
        int mileage;
    public:
        Cars(){
            brand = "";
            model = "";
            year = 0;
            mileage = 0;
        }

        Cars(string maker, string model_){
            brand = maker;
            model = model_;
            year = 0;
            mileage = 0;
        }

        Cars(string maker, string model_, int year_, int mileage_){
            brand = maker;
            model = model_;
            year = year_;
            mileage = mileage_;
        }

        void display();

};

void Cars :: display(){
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Mileage: " << mileage << endl;
    cout << endl;
}

int main(){
    Cars car1;
    Cars car2("Toyota", "Corolla");
    Cars car3("Honda", "Accord", 2015, 50000);
    
    
    car1.display();
    car2.display();
    car3.display();
    
    return 0;
}