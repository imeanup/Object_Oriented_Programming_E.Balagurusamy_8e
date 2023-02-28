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
        cout << "Enter the name of user " << i+1 << ": ";
        cin >> name;

        cout << "Enter the number of units consumed by " << name << ": ";
        cin >> units;

        if (units <= 100) charges = units * 0.6;
        else if (units <= 200) charges = 60 + (units-100) * 0.8;
        else if (units <= 300) charges = 140 + (units-200) * 0.9;
        else charges = 230 + (units-300) * 1.0 ;

        charges = max(charges, 50.0);
        if (charges > 300) charges *= 1.15; 

        cout << "Charges for " << name << " is Rs. " << charges << endl;
    }
    return 0;
}
/*
Enter the number of users: 5
Enter the name of user 1: Jones
Enter the number of units consumed by Jones: 100
Charges for Jones is Rs. 60
Enter the name of user 2: Amanda
Enter the number of units consumed by Amanda: 98
Charges for Amanda is Rs. 58.8
Enter the name of user 3: Lu  
Enter the number of units consumed by Lu: 345
Charges for Lu is Rs. 275
Enter the name of user 4: Adam
Enter the number of units consumed by Adam: 400
Charges for Adam is Rs. 379.5
Enter the name of user 5: Jolus
Enter the number of units consumed by Jolus: 0
Charges for Jolus is Rs. 50
*/