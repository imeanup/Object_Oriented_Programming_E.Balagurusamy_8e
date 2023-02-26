// TODO: A shopkeeper wants to maintain the stock database category wise
// (Electronics appliances, food items, clothing, milk product, kitchen product). 
// Specify all the classes and functions as per the relationship between different products.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// TODO: Product: This is the base class for all the products. 
// It contains the common attributes of all the products, such as the product ID, name, *description, price, and quantity.
class Product {
    protected:
        int id;
        string name;
        int quantity;
        double price;

    public:
        Product(int id, string name, double price, int quantity) : name(name), id(id), price(price), quantity(quantity) {}
        virtual ~Product();
        virtual string getCategory() const = 0;
        string getName() const { 
            return name; 
            }
        int getId() const {
            return id;
            }
        int getQuantity() const { 
            return quantity; 
            }
        void setPrice(double price) { 
            this->price = price; 
            }
        void setQuantity(int quantity) { 
            this->quantity = quantity; 
            }
};
