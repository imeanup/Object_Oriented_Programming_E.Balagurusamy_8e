#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class account {
protected:
    string name;
    int account_number;
    string account_type;
    double balance;

public:
    void set_name(string name) {
        this->name = name;
    }

    void set_account_number(int account_number) {
        this->account_number = account_number;
    }

    void set_account_type(string account_type) {
        this->account_type = account_type;
    }

    void display_balance() {
        cout << "Account balance: $" << balance << endl;
    }

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        balance -= amount;
    }

    virtual void compute_interest() {
        // No interest for generic account
    }

    virtual void check_minimum_balance() {
        // No minimum balance for generic account
    }
};

class cur_acct : public account {
private:
    double min_balance = 1000;
    double service_charge = 50;

public:
    void withdraw(double amount) {
        if (balance - amount < min_balance) {
            cout << "Insufficient funds in account!" << endl;
            cout << "Service charge of $" << service_charge << " has been applied." << endl;
            balance -= service_charge;
        }
        else {
            balance -= amount;
        }
    }

    void check_minimum_balance() {
        if (balance < min_balance) {
            cout << "Your balance has fallen below the minimum balance of $" << min_balance << endl;
            cout << "Service charge of $" << service_charge << " has been applied." << endl;
            balance -= service_charge;
        }
    }
};

class sav_acct : public account {
private:
    double interest_rate = 0.05;

public:
    void deposit(double amount) {
        balance += amount;
        compute_interest();
    }

    void compute_interest() {
        balance += balance * interest_rate;
    }
};

int main() {
    // Create a savings account
    sav_acct savings;
    savings.set_name("John Doe");
    savings.set_account_number(123456789);
    savings.set_account_type("Savings");
    savings.display_balance();
    savings.deposit(1000);
    savings.display_balance();
    savings.withdraw(500);
    savings.display_balance();
    savings.check_minimum_balance();

    // Create a current account
    cur_acct current;
    current.set_name("Jane Doe");
    current.set_account_number(987654321);
    current.set_account_type("Current");
    current.display_balance();
    current.deposit(5000);
    current.display_balance();
    current.withdraw(6000);
    current.display_balance();
    current.check_minimum_balance();

    return 0;
}
