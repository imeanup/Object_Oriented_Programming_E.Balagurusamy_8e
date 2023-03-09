#include <iostream>
using namespace std;

class DM; 

class DB {
  private:
    int feet, inches;

  public:
    DB() {
      feet = 0;
      inches = 0;
    }

    void read() {
      cout << "Enter distance in feet and inches: ";
      cin >> feet >> inches;
    }

    friend void add(DM, DB);
    friend void display(DB);
};

class DM {
  private:
    int meters, centimeters;

  public:
    DM() {
      meters = 0;
      centimeters = 0;
    }

    void read() {
      cout << "Enter distance in meters and centimeters: ";
      cin >> meters >> centimeters;
    }

    friend void add(DM, DB);
    friend void display(DM);
};

void add(DM dm, DB db) {
  int totalCentimeters = dm.meters * 100 + dm.centimeters + db.feet * 12 * 2.54 + db.inches * 2.54;
  int meters = totalCentimeters / 100;
  int centimeters = totalCentimeters % 100;

  DM result;
  result.meters = meters;
  result.centimeters = centimeters;

  display(result);
}

void display(DM dm) {
  cout << "Distance = " << dm.meters << " meters and " << dm.centimeters << " centimeters" << endl;
}

void display(DB db) {
  int feet = db.feet;
  int inches = db.inches;

  if (inches >= 12) {
    feet += inches / 12;
    inches = inches % 12;
  }

  cout << "Distance = " << feet << " feet and " << inches << " inches" << endl;
}

int main() {
  DM dm;
  DB db;
  int choice;

  cout << "Enter distance in DM (1) or DB (2): ";
  cin >> choice;

  if (choice == 1) {
    dm.read();
  } else if (choice == 2) {
    db.read();
  } else {
    cout << "Invalid choice!\n";
    return 1;
  }

  add(dm, db);

  return 0;
}
