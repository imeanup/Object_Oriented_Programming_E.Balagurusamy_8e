#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int units;
    double charges;

    cout << "Enter the number of users: ";
    int num_users;
    cin >> num_users;

    for (int i = 0; i < num_users; i++){
        cout << "Enter the name of user " << i+1 << ":";
        cin >> name;

        cout << "Enter the number of units consumed by " << name << ":";
        cin >> units;

        if (units <= 100) charges = units * 0.6;
        else if (units <= 200) charges = 60 + (units-100) * 0.8;
        else if (units <= 300) charges = 140 + (units-200) * 0.9;
        else charges = 230 + (units-300) * 1.0 ;

        charges = max(charges, 50.0);
        if (charges > 300) charges *= 1.15; 

        cout << "Charges for " << name << "= Rs. " << charges << endl;
    }
    return 0;
}