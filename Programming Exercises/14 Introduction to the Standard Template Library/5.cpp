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
    while (cin >> model >> sales){
        table[model] += sales;
    }
    // table["Model A"] = 100;
    // table["Model B"] = 200;
    // table["Model C"] = 300;
    // table["Model D"] = 400;
    // table["Model E"] = 500;

    string target_model;
    double unit_cost;
    cout << "Enter model name and unit cost: ";
    cin >> target_model >> unit_cost;

    double total_value = table[target_model] * unit_cost;
    cout << "Total value of " << table[target_model] << " unit sold for " << target_model << " is " << total_value << endl;
    return 0;
}