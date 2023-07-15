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

/*
Enter name of depositor 1: Jon
Enter account number for Jon: 123
Enter account type for Jon: Savings
Enter balance amount for Jon: $1000

Enter name of depositor 2: Don
Enter account number for Don: 124
Enter account type for Don: Current
Enter balance amount for Don: $9999

Enter name of depositor 3: Mike
Enter account number for Mike: 125
Enter account type for Mike: Current
Enter balance amount for Mike: $800

Enter name of depositor 4: Ross
Enter account number for Ross: 126
Enter account type for Ross: Saving
Enter balance amount for Ross: $9

Enter name of depositor 5: Boss
Enter account number for Boss: 127
Enter account type for Boss: Saving  
Enter balance amount for Boss: $0

Enter name of depositor 6: Jake
Enter account number for Jake: 128
Enter account type for Jake: Current
Enter balance amount for Jake: $87

Enter name of depositor 7: Jenny
Enter account number for Jenny: 129
Enter account type for Jenny: Current
Enter balance amount for Jenny: $7

Enter name of depositor 8: Nemar
Enter account number for Nemar: 130
Enter account type for Nemar: Saving
Enter balance amount for Nemar: $999

Enter name of depositor 9: Sandra
Enter account number for Sandra: 120
Enter account type for Sandra: Saving
Enter balance amount for Sandra: $349

Enter name of depositor 10: Andrew
Enter account number for Andrew: Saving
Enter account type for Andrew: Enter balance amount for Andrew: $
Enter deposit amount for Jon: $Enter withdrawal amount for Jon: $Withdrawal successful.

Enter deposit amount for Don: $Enter withdrawal amount for Don: $Withdrawal successful.

Enter deposit amount for Mike: $Enter withdrawal amount for Mike: $Withdrawal successful.

Enter deposit amount for Ross: $Enter withdrawal amount for Ross: $Withdrawal successful.

Enter deposit amount for Boss: $Enter withdrawal amount for Boss: $Withdrawal successful.

Enter deposit amount for Jake: $Enter withdrawal amount for Jake: $Withdrawal successful.

Enter deposit amount for Jenny: $Enter withdrawal amount for Jenny: $Withdrawal successful.

Enter deposit amount for Nemar: $Enter withdrawal amount for Nemar: $Withdrawal successful.

Enter deposit amount for Sandra: $Enter withdrawal amount for Sandra: $Withdrawal successful.

Enter deposit amount for Andrew: $Enter withdrawal amount for Andrew: $Withdrawal successful.

Account information for customer 1:
Name: Jon
Account Number: 123
Account Type: Savings
Balance: $1000

Account information for customer 2:
Name: Don
Account Number: 124
Account Type: Current
Balance: $9999

Account information for customer 3:
Name: Mike
Account Number: 125
Account Type: Current
Balance: $800

Account information for customer 4:
Name: Ross
Account Number: 126
Account Type: Saving
Balance: $9

Account information for customer 5:
Name: Boss
Account Number: 127
Account Type: Saving
Balance: $0

Account information for customer 6:
Name: Jake
Account Number: 128
Account Type: Current
Balance: $87

Account information for customer 7:
Name: Jenny
Account Number: 129
Account Type: Current
Balance: $7

Account information for customer 8:
Name: Nemar
Account Number: 130
Account Type: Saving
Balance: $999

Account information for customer 9:
Name: Sandra
Account Number: 120
Account Type: Saving
Balance: $349

Account information for customer 10:
Name: Andrew
Account Number: 0
Account Type: Saving
Balance: $349

*/