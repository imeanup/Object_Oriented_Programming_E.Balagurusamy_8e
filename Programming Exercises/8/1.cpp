#include<iostream>
#include<string>
using namespace std;

class account {
    protected:
        string customerName;
        int accountNumber;
        char accountType;
        float balance;
    public:
        void getAccountInfo() {
            cout << "Enter customer name: ";
            getline(cin, customerName);
            cout << "Enter account number: ";
            cin >> accountNumber;
            cout << "Enter account type - Savings (S) or Current (C): ";
            cin >> accountType;
            accountType = toupper(accountType);
            cout << "Enter initial balance: ";
            cin >> balance;
        }
        void displayBalance() {
            cout << "Current balance: " << balance << endl;
        }
};

class sav_acct : public account {
    float interestRate;
public:
    void getInterestRate() {
        cout << "Enter interest rate: ";
        cin >> interestRate;
    }
    void addInterest() {
        float interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest added. Current balance: " << balance << endl;
    }
    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
            cout << "Current balance: " << balance << endl;
        }
        else {
            cout << "Insufficient balance." << endl;
        }
    }
};

class cur_acct : public account {
    float minBalance;
    float serviceCharge;
public:
    void getMinBalance() {
        cout << "Enter minimum balance: ";
        cin >> minBalance;
    }
    void getServiceCharge() {
        cout << "Enter service charge: ";
        cin >> serviceCharge;
    }
    void checkMinBalance() {
        if (balance < minBalance) {
            balance -= serviceCharge;
            cout << "Service charge imposed. Current balance: " << balance << endl;
        }
    }
    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
            cout << "Current balance: " << balance << endl;
            checkMinBalance();
        }
        else {
            cout << "Insufficient balance." << endl;
        }
    }
};

int main() {
    int choice;
    sav_acct savings;
    cur_acct current;
    cout << "Select account type - Savings (1) or Current (2): ";
    cin >> choice;
    cin.ignore();
    if (choice == 1) {
        savings.getAccountInfo();
        savings.getInterestRate();
        cout << endl;
        savings.displayBalance();
        savings.addInterest();
        savings.withdraw(1000);
    }
    else if (choice == 2) {
        current.getAccountInfo();
        current.getMinBalance();
        current.getServiceCharge();
        cout << endl;
        current.displayBalance();
        current.withdraw(2000);
    }
    else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}
