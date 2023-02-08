/*
Define a lass to represent a bank account. Inlcude the following members:
Data members
a) Name of the depositor
b) Account number
c) Type of account
d) Balance amount in the account

Member functions:
a) To assign initial values
b) To deposit an amount
c) To withdraw an amount after checking the balance
d) To display name and balance

Write a main program to test the program.
*/

#include<iostream>
#include<string>

using namespace std;

class BankAccount {
    string name;
    int accountNumber;
    string type;
    float balance;

public:
    BankAccount(string name, int accountNumber, string type, float balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->type = type;
        this->balance = balance;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Type: " << type << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 12345, "Savings", 5000);
    cout << "Initial details: " << endl;
    account.display();
    account.deposit(2000);
    cout << "\nAfter deposit: " << endl;
    account.display();
    account.withdraw(3000);
    cout << "\nAfter withdrawal: " << endl;
    account.display();

    return 0;
}
