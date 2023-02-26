// TODO: Define all the functions and classes as per the relationship for a shopkeeper of the following type of items,
// a) Two wheeler manual, electric, and automatic
// b) Three wheeler manual, electric and automatic
// c) Four wheeler automatic

#include <iostream>
#include <string>
using namespace std;

// Vehicle class
class Vehicle {
public:
  virtual void start() = 0;
  virtual void stop() = 0;
  virtual void drive() = 0;
};

// TwoWheeler class
class TwoWheeler : public Vehicle {
public:
  virtual void start()  {
    // Start the two-wheeler
  }

  virtual void stop()  {
    // Stop the two-wheeler
  }

  virtual void drive()  {
    // Drive the two-wheeler
  }
};

// ThreeWheeler class
class ThreeWheeler : public Vehicle {
public:
  virtual void start()  {
    // Start the three-wheeler
  }

  virtual void stop()  {
    // Stop the three-wheeler
  }

  virtual void drive()  {
    // Drive the three-wheeler
  }
};

// FourWheeler class
class FourWheeler : public Vehicle {
public:
  virtual void start()  {
    // Start the four-wheeler
  }

  virtual void stop()  {
    // Stop the four-wheeler
  }

  virtual void drive()  {
    // Drive the four-wheeler
  }
};

// ManualTwoWheeler class
class ManualTwoWheeler : public TwoWheeler {
public:
  // Additional functions and variables for manual two-wheelers
};

// ElectricTwoWheeler class
class ElectricTwoWheeler : public TwoWheeler {
public:
  // Additional functions and variables for electric two-wheelers
};

// AutomaticTwoWheeler class
class AutomaticTwoWheeler : public TwoWheeler {
public:
  // Additional functions and variables for automatic two-wheelers
};

// ManualThreeWheeler class
class ManualThreeWheeler : public ThreeWheeler {
public:
  // Additional functions and variables for manual three-wheelers
};

// ElectricThreeWheeler class
class ElectricThreeWheeler : public ThreeWheeler {
public:
  // Additional functions and variables for electric three-wheelers
};

// AutomaticThreeWheeler class
class AutomaticThreeWheeler : public ThreeWheeler {
public:
  // Additional functions and variables for automatic three-wheelers
};

// AutomaticFourWheeler class
class AutomaticFourWheeler : public FourWheeler {
public:
  // Additional functions and variables for automatic four-wheelers
};

// Shopkeeper class
class Shopkeeper {
public:
  void sellTwoWheeler(TwoWheeler* vehicle) {
    // Sell the two-wheeler
  }

  void sellThreeWheeler(ThreeWheeler* vehicle) {
    // Sell the three-wheeler
  }

  void sellFourWheeler(FourWheeler* vehicle) {
    // Sell the four-wheeler
  }
};

int main(){
    return 0;
}