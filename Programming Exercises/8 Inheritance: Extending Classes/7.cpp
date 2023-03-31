#include <iostream>
#include <vector>

using namespace std;

class User {
protected:
    string username;
    string password;
public:
    User(string username, string password) : username(username), password(password) {}
};

class Customer : public User {
public:
    Customer(string username, string password) : User(username, password) {}
};

class Seller : public User {
public:
    Seller(string username, string password) : User(username, password) {}
};

class Product {
protected:
    string name;
    double price;
    string description;
public:
    Product(string name, double price, string description) : name(name), price(price), description(description) {}
    string getName() { return name; }
    double getPrice() { return price; }
};

class ShoppingCart {
private:
    vector<Product*> cart;
public:
    void addProduct(Product* product) { cart.push_back(product); }
    void removeProduct(int index) { cart.erase(cart.begin() + index); }
    double getTotalPrice() {
        double totalPrice = 0;
        for (int i = 0; i < cart.size(); i++) {
            totalPrice += cart[i]->getPrice();
        }
        return totalPrice;
    }
    void displayCart() {
        cout << "Shopping Cart:" << endl;
        for (int i = 0; i < cart.size(); i++) {
            cout << i+1 << ". " << cart[i]->getName() << " - $" << cart[i]->getPrice() << endl;
        }
        cout << "Total: $" << getTotalPrice() << endl;
    }
};

class EcommercePlatform {
private:
    vector<Product*> products;
public:
    void addProduct(Product* product) { products.push_back(product); }
    void displayProducts() {
        cout << "Products:" << endl;
        for (int i = 0; i < products.size(); i++) {
            cout << i+1 << ". " << products[i]->getName() << " - $" << products[i]->getPrice() << endl;
        }
    }
    void buyProduct(ShoppingCart* cart, int index) {
        if (index >= 0 && index < products.size()) {
            cart->addProduct(products[index]);
            cout << "Added " << products[index]->getName() << " to cart." << endl;
        }
        else {
            cout << "Invalid product index." << endl;
        }
    }
};

int main() {
    EcommercePlatform platform;
    Customer* alice = new Customer("alice", "password");
    Customer* bob = new Customer("bob", "password");
    Seller* charlie = new Seller("charlie", "password");

    Product* product1 = new Product("Product 1", 10.99, "This is product 1.");
    Product* product2 = new Product("Product 2", 15.99, "This is product 2.");
    Product* product3 = new Product("Product 3", 7.99, "This is product 3.");

    platform.addProduct(product1);
    platform.addProduct(product2);
    platform.addProduct(product3);

    ShoppingCart* aliceCart = new ShoppingCart();
    ShoppingCart* bobCart = new ShoppingCart();

    platform.buyProduct(aliceCart, 1);
    platform.buyProduct(aliceCart, 0);
    platform.buyProduct(bobCart, 2);

    aliceCart->displayCart();
    bobCart->displayCart();

    delete alice;
    delete bob;
    delete charlie;

    delete product1;
    delete product2;
    delete product3;

    delete aliceCart;
    delete bobCart;

    return 0;
}
