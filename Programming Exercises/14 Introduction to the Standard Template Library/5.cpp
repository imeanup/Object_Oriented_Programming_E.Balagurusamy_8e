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
    // while (cin >> model >> sales){
    //     table[model] += sales;
    // }
    table["A"] = 100;
    table["B"] = 200;
    table["C"] = 300;

    // get user input for unit cost and model name
    double unit_cost;
    std::cout << "Enter unit cost: ";
    std::cin >> unit_cost;

    std::string model_name;
    std::cout << "Enter model name: ";
    std::cin >> model_name;

    // calculate and display total value of the model sold
    double total_value = table[model_name] * unit_cost;
    std::cout << "Total value of " << model_name << " sold: " << total_value << std::endl;

    return 0;
}