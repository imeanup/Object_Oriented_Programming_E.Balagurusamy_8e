#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    vector<string> names;
    vector<int> codes;
    vector<double> costs;

    cout << "Enter item details (name, code, cost): " << endl;
    string name;
    int code;
    double cost;

    while (true){
        cout << "Name (or empty to stop): ";
        getline(cin, name);

        if (name.empty()){
            break;
        }

        cout << "Code: ";
        cin >> code;
        cout << "Cost: ";
        cin >> cost;

        names.push_back(name);
        codes.push_back(code);
        costs.push_back(cost);

        cin.ignore();
    }
    cout << left << setw(20) << "NAME" << setw(10) << "CODE" << setw(10) << right << "COST" << endl;

 
    for (int i = 0; i < names.size(); i++) {
        
        cout << left << setw(20) << setfill('-') << names[i] << setw(10) << setfill('-') << codes[i] << right << fixed << setprecision(2) << setw(10) << costs[i] << endl;
    }
    return 0;
}

/*
Enter item details (name, code, cost): 
Name (or empty to stop): Turbo C++
Code: 1001
Cost: 250.95
Name (or empty to stop): Primer C
Code: 905
Cost: 95.70
Name (or empty to stop): 
NAME                CODE            COST
Turbo C++-----------1001----------250.95
Primer C------------905------------95.70
*/