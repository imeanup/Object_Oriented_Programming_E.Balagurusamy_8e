#include <iostream>
#include <string>
using namespace std;

class Product{
    string name;
    int id;
    // string description;
    double price;
    int quantity;

    public:
        Product(string name, int id, double price, int quantity) : name(name), id(id), price(price), quantity(quantity) {}
        virtual ~Product(){}
        
};

