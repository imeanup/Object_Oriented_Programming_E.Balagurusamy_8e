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

/*
g++ -std=c++11 5.cpp
./a.out 

Enter the model and unit sales (enter '-1' when finished): A 100
B 200
C 300
-1
Car Sales
A: 100
B: 200
C: 300
Enter model name and unit cost: A 50
Total value of 100 unit sold for A is 5000
*/