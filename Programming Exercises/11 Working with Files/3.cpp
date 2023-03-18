/*
Write a program that will create a data file containing the list of telephone numbers given in exercise in 11.2. 
Use a class object to store each set of data.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Telephone {
public:
    string name;
    string number;

    Telephone(string name, string number) {
        this->name = name;
        this->number = number;
    }

    string toString() {
        return name + " " + number;
    }
};

int main() {
    Telephone telephones[] = {
        Telephone("John", "23456"),
        Telephone("Ahmed", "9876"),
        // Add more Telephone objects here
    };

    ofstream file("telephone_numbers.txt");
    if (file.is_open()) {
        for (Telephone telephone : telephones) {
            file << telephone.toString() << endl;
        }
        file.close();
    }

    return 0;
}