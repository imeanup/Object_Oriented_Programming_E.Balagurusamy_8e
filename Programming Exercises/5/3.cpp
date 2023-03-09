// Modify the class and the program of Ex 5.1 for handling 10 customers.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        string depositorName;
        int accountNumber;
        string accountType;
        float balance;

    public:
        void assignInitialValues(string name, int accNo, string accType, double bal) {
            depositorName = name;
            accountNumber = accNo;
            accountType = accType;
            balance = bal;
        }

        void deposit(float amount) {
            balance += amount;
        }

        void withdraw(float amount) {
            if (amount > balance) {
                cout << "Withdrawal unsuccessful. Insufficient balance." << endl;
            }
            else {
                balance -= amount;
                cout << "Withdrawal successful." << endl;
            }
        }

        void display() {
            // Function to display name and balance
            cout << "Name: " << depositorName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Type: " << accountType << endl;
            cout << "Balance: $" << balance << endl;
        }

        string getDepositorName(){
            return depositorName;
        }
};

int main() {
    BankAccount accounts[10];
    string name, type;
    int number;
    float balance, amount;

    // Input data for 10 customers
    for (int i = 0; i < 10; i++) {
        cout << "Enter name of depositor " << i+1 << ": ";
        getline(cin, name);
        cout << "Enter account number for " << name << ": ";
        cin >> number;
        cin.ignore();
        cout << "Enter account type for " << name << ": ";
        getline(cin, type);
        cout << "Enter balance amount for " << name << ": $";
        cin >> balance;
        cin.ignore();

        accounts[i].assignInitialValues(name, number, type, balance);
        cout << endl;
    }

    // Deposit and withdraw operations for 10 customers
    for (int i = 0; i < 10; i++) {
        cout << "Enter deposit amount for " << accounts[i].getDepositorName() << ": $";
        cin >> amount;
        accounts[i].deposit(amount);

        cout << "Enter withdrawal amount for " << accounts[i].getDepositorName() << ": $";
        cin >> amount;
        accounts[i].withdraw(amount);
        cout << endl;
    }

    // Display name and balance for all 10 customers
    for (int i = 0; i < 10; i++) {
        cout << "Account information for customer " << i+1 << ":" << endl;
        accounts[i].display();
        cout << endl;
    }

    return 0;
}
