/*
Write an interactive, menu-driven program that will access the file created in exercise 11.3 and implement the tasks:
(a) Determine the telephone number of the specified person.
(b) Determine the name if a telephone number is known.
(c) Update, the telephone number, whenever there is a change.
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

void printMenu() {
    cout << "1. Determine the telephone number of the specified person." << endl;
    cout << "2. Determine the name if a telephone number is known." << endl;
    cout << "3. Update the telephone number." << endl;
    cout << "4. Exit." << endl;
}

int main() {
    Telephone* telephones = new Telephone[10];
    int count = 0;

    ifstream file("telephone_numbers.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            string name = line.substr(0, line.find(" "));
            string number = line.substr(line.find(" ") + 1);
            telephones[count] = Telephone(name, number);
            count++;
        }
        file.close();
    }

    int choice = 0;
    while (choice != 4) {
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                cout << "Enter the name: ";
                cin >> name;

                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (telephones[i].name == name) {
                        cout << "Telephone number: " << telephones[i].number << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Name not found." << endl;
                }

                break;
            }
            case 2: {
                string number;
                cout << "Enter the number: ";
                cin >> number;

                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (telephones[i].number == number) {
                        cout << "Name: " << telephones[i].name << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Number not found." << endl;
                }

                break;
            }
            case 3: {
                string name, number;
                cout << "Enter the name: ";
                cin >> name;
                cout << "Enter the new number: ";
                cin >> number;

                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (telephones[i].name == name) {
                        telephones[i].number = number;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Name not found." << endl;
                }

                break;
            }
            case 4: {
                break;
            }
            default: {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }

    ofstream file2("telephone_numbers.txt");
    if (file2.is_open()) {
        for (int i = 0; i < count; i++) {
            file2 << telephones[i].toString() << endl;
        }
        file2.close();
    }

    delete[] telephones;

    return 0;
}