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

// TODO: ElectronicsAppliances: This class is derived from the Product class and contains additional attributes specific 
// to electronics appliances, such as the manufacturer name, power consumption, and warranty period.
class Electronics {
    private:
        string manufacturer;
        float powerConsumption;
        int warrantyPeriod;
    public:
        Electronics(string &manu, float power, int warranty)
            : manufacturer(manu), powerConsumption(power), warrantyPeriod(warranty) {}
        const string &getManufacturer() const {
            return manufacturer;
        }
        void setManufacturer(const string &manu){
            manufacturer = manu;
        }
        float getPowerConsumption() const{
            return powerConsumption;
        }
        void setPowerConsumption(float power) {
            powerConsumption = power;
        }
        int getWarrantyPeriod() const {
            return warrantyPeriod;
        }     
        void setWarrantyPeriod(int warranty) {
            warrantyPeriod = warranty;
        }
};

class Food{
    private:
        string expiryDate;
        string nutritionalInfo;
        string storageInstructions;
    public:
        Food(const string &expiry, const string &info, const string &inst) :
            expiryDate(expiry), nutritionalInfo(info), storageInstructions(inst){}
        const string& getExpiryDate() const {
            return expiryDate;
        }
        const string& getNutritionalInfo() const {
            return nutritionalInfo;
        }
        const string& getStorageInstructions() const {
            return storageInstructions;
        }
        void setExpiryDate(const std::string& expiry) {
            expiryDate = expiry;
        }
        void setNutritionalInfo(const std::string& info) {
            nutritionalInfo = info;
        }
        void setStorageInstructions(const std::string& inst) {
            storageInstructions = inst;
        }
};

class Clothing{
    private:
        string size;
        string color;
        string material;
};

class Milk : public Food{
    private:
        string brand;
        float fatContent;
        // string storageInstruction;
};