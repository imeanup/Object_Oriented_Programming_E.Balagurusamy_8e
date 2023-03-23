// A shopkeeper wants to maintain the stock database category wise
// (Electronics appliances, food items, clothing, milk product, kitchen product). 
// Specify all the classes and functions as per the relationship between different products.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Product: This is the base class for all the products. 
// It contains the common attributes of all the products, such as the product ID, name, *description, price, and quantity.
class Product {
    protected:
        int id;
        string name;
        int quantity;
        double price;

    public:
        Product(int id, string name, double price, int quantity) : name(name), id(id), price(price), quantity(quantity) {}
        virtual ~Product() {}
        virtual string getCategory() const = 0;
        
        int getId() const {
            return id;
        }

        string getName() const { 
            return name; 
        }
        
        int getQuantity() const { 
            return quantity; 
        }

        void setQuantity(int quantity) { 
            this->quantity = quantity; 
        }

        void setPrice(double price) { 
            this->price = price; 
        }
        
};

// ElectronicsAppliances: This class is derived from the Product class and contains additional attributes specific 
// to electronics appliances, such as the manufacturer name, power consumption, and warranty period.
class Electronics : public Product {
    private:
        string manufacturer;
        float powerConsumption;
        int warrantyPeriod;
    public:
        Electronics(int id, const string &name, double price, int quantity, string &manu, float power, int warranty)
            : Product(id, name, price, quantity), manufacturer(manu), powerConsumption(power), warrantyPeriod(warranty) {}
        
        string getCategory() const  {
            return "Electronics Appliances";
        }

        const string &getManufacturer() const {
            return manufacturer;
        }

        void setManufacturer(const string& manufacturer) {
            this->manufacturer = manufacturer;
        }

        float getPowerConsumption() const{
            return powerConsumption;
        }

        void setPowerConsumption(float powerConsumption) {
            this->powerConsumption = powerConsumption;
        }

        int getWarrantyPeriod() const {
            return warrantyPeriod;
        }     
        void setWarrantyPeriod(int warrantyPeriod) {
            this->warrantyPeriod = warrantyPeriod;
        }
};
// Food: This class is derived from the Product class and contains additional attributes specific to food items, 
// such as the expiry date, nutritional information, and storage instructions.
class Food : public Product{
    private:
        string expiryDate;
        string nutritionalInfo;
        string storageInstructions;
    public:
        Food(int id, const string &name, double price, int quantity, const string &expiry, const string &info, const string &inst) :
            Product(id, name, price, quantity), expiryDate(expiry), nutritionalInfo(info), storageInstructions(inst){}

        string getCategory() const  {
            return "Food Items";
        }
        const string& getExpiryDate() const {
            return expiryDate;
        }
        const string& getNutritionalInfo() const {
            return nutritionalInfo;
        }
        const string& getStorageInstructions() const {
            return storageInstructions;
        }
        void setExpiryDate(const string& expiryDate) {
            this->expiryDate = expiryDate;
        }
        void setNutritionalInfo(const string& nutritionalInfo) {
            this->nutritionalInfo = nutritionalInfo;
        }
        void setStorageInstructions(const string& storageInstructions) {
            this->storageInstructions = storageInstructions;
        }
};

// MilkProduct: This class is derived from the Product class and contains additional attributes specific to milk products, 
// such as the brand, fat content, and storage instructions.

class MilkProduct : public Food {
    private:
        string brand;
        float fatContent;
        string storageTemperature;
    public:
        MilkProduct(int id, const string &name, double price, int quantity, const string& brand, float fat, const string& expiry,
                    const string& info, const string& inst, const string& storageTemp)
            : Food(id, name, price, quantity, expiry, info, inst), brand(brand), fatContent(fat), storageTemperature(storageTemp) {}

        string getCategory() const  {
            return "Milk Products";
        }

        const string& getBrand() const {
            return brand;
        }
        
        void setBrand(const string& brand) {
            this->brand = brand;
        }

        float getFatContent() const {
            return fatContent;
        }
        
        void setFatContent(float fat) {
            fatContent = fat;
        }

        const string& getStorageTemperature() const {
            return storageTemperature;
        }

        void setStorageTemperature(const string& temp) {
            storageTemperature = temp;
        }
};

// Clothing: This class is derived from the Product class and contains additional attributes specific to clothing, 
// such as the size, color, and material.

class Clothing : public Product {
    private:
        string size;
        string color;
        string material;
    public:
        Clothing(int id, const string &name, double price, int quantity, const string& size, const string& color, const string& material)
            : Product(id, name, price, quantity), size(size), color(color), material(material) {}

        string getCategory() const  {
            return "Clothing Products";
        }

        const string& getSize() const {
            return size;
        }
        
        void setSize(const string& size) {
            this->size = size;
        }

        const string& getColor() const {
            return color;
        }
        
        void setColor(const string& color) {
            this->color = color;
        }

        const string& getMaterial() const {
            return material;
        }
        
        void setMaterial(const string& material) {
            this->material = material;
        }
};

// KitchenProduct: This class is derived from the Product class and contains additional attributes specific to kitchen products,
// such as the brand, material, and usage instructions.

class KitchenProduct : public Product {
    private:
        string brand;
        string material;
        string usageInstructions;
    public:
        KitchenProduct(int id, const string &name, double price, int quantity, const string& brand, const string& material, const string& inst)
            : Product(id, name, price, quantity), brand(brand), material(material), usageInstructions(inst) {}

        string getCategory() const  {
            return "Kitchen Products";
        }

        const string& getBrand() const {
            return brand;
        }
        
        void setBrand(const string& brand) {
            this->brand = brand;
        }

        const string& getMaterial() const {
            return material;
        }
        
        void setMaterial(const string& material) {
            this->material = material;
        }

        const string& getUsageInstructions() const {
            return usageInstructions;
        }
        
        void setUsageInstructions(const string& inst) {
            usageInstructions = inst;
        }
};

int main(){
    // Implement the main function. (TODO added)
    return 0;
};