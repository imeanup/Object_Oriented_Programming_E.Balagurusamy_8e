// A table gives a list of car models and the numbers of units sold in each type in a specified period. 
// Write a program to store this table in a suitable container,
// and to display interactively the total value of a particular model sold, given the unit-cost of that model.

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string,int> table;

    string model;
    int sales;
    cout << "Enter the model and unit sales (enter '-1' when finished): ";
    while (cin >> model){
        if (model == "-1"){
            break;
        }
        cin >> sales;
        table[model] += sales;
    }
    cout << "Car Sales" << endl;
    for (const auto& pair : table) {
        cout << pair.first << ": " << pair.second << endl;
    } 
    string target_model;
    double unit_cost;
    cout << "Enter model name and unit cost: ";
    cin >> target_model >> unit_cost;

    double total_value = table[target_model] * unit_cost;
    cout << "Total value of " << table[target_model] << " unit sold for " << target_model << " is " << total_value << endl;
    return 0;
}