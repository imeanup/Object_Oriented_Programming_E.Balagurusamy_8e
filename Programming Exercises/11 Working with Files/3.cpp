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

    Telephone() {}

    Telephone(string name, string number) {
        this->name = name;
        this->number = number;
    }

    string toString() {
        return name + " " + number;
    }
};

int main() {
    int n;
    cout << "Enter the number of records to be added: ";
    cin >> n;
    Telephone* telephones = new Telephone[n];

    int count = 0;

    while (count < n) {
        string name, number;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter number: ";
        cin >> number;
        telephones[count] = Telephone(name, number);
        count++;
    }

    ofstream file("telephone_numbers.txt");
    if (file.is_open()) {
        for (int i = 0; i < n; i++) {
            file << telephones[i].toString() << endl;
        }
        file.close();
    }

    delete[] telephones;

    return 0;
}

/*
Enter the number of records to be added: 3 
Enter name: Mike
Enter number: 1234
Enter name: John
Enter number: 3456
Enter name: Cine
Enter number: 7890

Open file name telephone_numbers.txt
*/