#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class account {
protected:
    string customerName;
    int accountNumber;
    char accountType;
    float balance;

public:
    account(string name, int num, char type, float bal) {
        customerName = name;
        accountNumber = num;
        accountType = type;
        balance = bal;
    }

    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }

    virtual void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
        cout << "Current balance: " << balance << endl;
    }

    virtual void withdraw(float amount) = 0;
};

class sav_acct : public account {
    float interestRate;

public:
    sav_acct(string name, int num, float bal, float rate)
        : account(name, num, 'S', bal), interestRate(rate) {}

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
    cur_acct(string name, int num, float bal, float minBal, float charge)
        : account(name, num, 'C', bal), minBalance(minBal), serviceCharge(charge) {}

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
    sav_acct savings("John Doe", 123456, 1000.0, 5.0);
    cur_acct current("Jane Smith", 654321, 5000.0, 1000.0, 50.0);

    cout << "Savings account details: " << endl;
    savings.displayBalance();
    savings.deposit(500.0);
    savings.addInterest();
    savings.withdraw(200.0);

    cout << endl;

    cout << "Current account details: " << endl;
    current.displayBalance();
    current.deposit(1000.0);
    current.withdraw(2000.0);

    return 0;
}
