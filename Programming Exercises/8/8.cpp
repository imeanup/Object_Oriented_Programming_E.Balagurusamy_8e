// TODO: A shopkeeper wants to maintain the stock database category wise
// (Electronics appliances, food items, clothing, milk product, kitchen product). 
// Specify all the classes and functions as per the relationship between different products.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class Product
class Product {
protected:
    string name;
    int quantity;
public:
    Product(string n, int q) : name(n), quantity(q) {}
    virtual void display() = 0;
    virtual string getCategory() = 0;
    void setName(string n) { name = n; }
    void setQuantity(int q) { quantity = q; }
    string getName() { return name; }
    int getQuantity() { return quantity; }
};

// Derived classes for different categories of products
class Electronics : public Product {
private:
    string brand;
    double price;
public:
    Electronics(string n, int q, string b, double p) : Product(n, q), brand(b), price(p) {}
    void display() {
        cout << "Product: " << name << endl;
        cout << "Category: Electronics" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
    string getCategory() { return "Electronics"; }
};

class Food : public Product {
private:
    string type;
    string expiryDate;
public:
    Food(string n, int q, string t, string e) : Product(n, q), type(t), expiryDate(e) {}
    void display() {
        cout << "Product: " << name << endl;
        cout << "Category: Food" << endl;
        cout << "Type: " << type << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "Quantity: " << quantity << endl;
    }
    string getCategory() { return "Food"; }
};

class Clothing : public Product {
private:
    string size;
    string color;
public:
    Clothing(string n, int q, string s, string c) : Product(n, q), size(s), color(c) {}
    void display() {
        cout << "Product: " << name << endl;
        cout << "Category: Clothing" << endl;
        cout << "Size: " << size << endl;
        cout << "Color: " << color << endl;
        cout << "Quantity: " << quantity << endl;
    }
    string getCategory() { return "Clothing"; }
};

class MilkProduct : public Product {
private:
    string brand;
    string expiryDate;
public:
    MilkProduct(string n, int q, string b, string e) : Product(n, q), brand(b), expiryDate(e) {}
    void display() {
        cout << "Product: " << name << endl;
        cout << "Category: Milk Product" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "Quantity: " << quantity << endl;
    }
    string getCategory() { return "Milk Product"; }
};

class KitchenProduct : public Product {
private:
    string brand;
    string material;
public:
    KitchenProduct(string n, int q, string b, string m) : Product(n, q), brand(b), material(m) {}
    void display() {
        cout << "Product: " << name << endl;
        cout << "Category: Kitchen Product" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Material: " << material << endl;
        cout << "Quantity: " << quantity << endl;
    }
    string getCategory() { return "Kitchen Product"; }
};
