// Modify the class and program of Ex 5.2 such that the program would be able to add two vectors and display the resultant vector.(Note that we can pass object as function arguments.)

#include <iostream>
#include <vector>
using namespace std;

class Vector {
  private:
    vector<float> values;

  public:
    Vector() {}

    void create(int size) {
      float val;
      for (int i = 0; i < size; i++) {
        cout << "Enter value for element " << i << ": ";
        cin >> val;
        values.push_back(val);
      }
    }

    void modify(int index, float newVal) {
      if (index >= 0 && index < values.size()) {
        values[index] = newVal;
      } else {
        cout << "Invalid index!" << endl;
      }
    }

    void multiply(float scalar) {
      for (int i = 0; i < values.size(); i++) {
        values[i] *= scalar;
      }
    }

    void display() {
      cout << "(";
      for (int i = 0; i < values.size() - 1; i++) {
        cout << values[i] << ", ";
      }
      if (values.size() > 0) {
        cout << values.back();
      }
      cout << ")" << endl;
    }

    Vector add(Vector v) {
      Vector result;
      if (values.size() != v.values.size()) {
        cout << "Vectors must be of same size!" << endl;
      } else {
        for (int i = 0; i < values.size(); i++) {
          result.values.push_back(values[i] + v.values[i]);
        }
      }
      return result;
    }
};

int main() {
  Vector v1, v2, v3;
  int size, index;
  float newVal, scalar;

  cout << "Create vector 1:" << endl;
  cout << "Enter size: ";
  cin >> size;
  v1.create(size);

  cout << "Modify vector 1:" << endl;
  cout << "Enter index of element to modify: ";
  cin >> index;
  cout << "Enter new value: ";
  cin >> newVal;
  v1.modify(index, newVal);

  cout << "Multiply vector 1 by scalar:" << endl;
  cout << "Enter scalar: ";
  cin >> scalar;
  v1.multiply(scalar);

  cout << "Display vector 1:" << endl;
  v1.display();

  cout << "Create vector 2:" << endl;
  cout << "Enter size: ";
  cin >> size;
  v2.create(size);

  cout << "Modify vector 2:" << endl;
  cout << "Enter index of element to modify: ";
  cin >> index;
  cout << "Enter new value: ";
  cin >> newVal;
  v2.modify(index, newVal);

  cout << "Multiply vector 2 by scalar:" << endl;
  cout << "Enter scalar: ";
  cin >> scalar;
  v2.multiply(scalar);

  cout << "Display vector 2:" << endl;
  v2.display();

  cout << "Add vector 1 and vector 2:" << endl;
  v3 = v1.add(v2);
  v3.display();

  return 0;
}
