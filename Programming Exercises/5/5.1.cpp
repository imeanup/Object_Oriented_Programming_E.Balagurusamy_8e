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
// #include<iostream>
// #include<string>

// using namespace std;

// class BankAccount {
//     string name;
//     int accountNumber;
//     string type;
//     float balance;

// public:
//     BankAccount(string name, int accountNumber, string type, float balance) {
//         this->name = name;
//         this->accountNumber = accountNumber;
//         this->type = type;
//         this->balance = balance;
//     }

//     void deposit(float amount) {
//         balance += amount;
//     }

//     void withdraw(float amount) {
//         if (balance >= amount) {
//             balance -= amount;
//             cout << "Withdrawal successful." << endl;
//         } else {
//             cout << "Insufficient balance." << endl;
//         }
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Type: " << type << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     BankAccount account("John Doe", 12345, "Savings", 5000);
//     cout << "Initial details: " << endl;
//     account.display();
//     account.deposit(2000);
//     cout << "\nAfter deposit: " << endl;
//     account.display();
//     account.withdraw(3000);
//     cout << "\nAfter withdrawal: " << endl;
//     account.display();

//     return 0;
// }


/*Create a class bank with functions:
1.to initialize
2.to deposit
3.to withdraw
by using data types name, acc_type,acc_no,balance
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class bank_acc
{
	char name[30];
	char acc_type[30];
	int acc_no;
	float bal;
	public:
	void init()
	{
		cout << "Name ";
		cin>>name;
		cout<<"Account type ";
		cin>>acc_type;
		cout<<"Account number ";
		cin>>acc_no;
		cout<<"Balance ";
		cin>>bal;
	}
	void deposit()
	{
		float amount;
		cout<<"Enter amount";
		cin>>amount;
		bal=bal+amount;
		cout<<"Current account balance="<<bal<<endl;
	}
	void withdraw()
	{
		float with_amount;
		cout<<"Enter amount to be withdrawn";
		cin>>with_amount;
		if(bal<with_amount)
		cout<<"Insufficient balance!"<<endl;
		else
		{
			bal=bal-with_amount;
			cout<<"You withdrew rupees "<<with_amount<<" and current balance="<<bal<<endl;
		}
	}
	void display()
	{
		cout<<"Name="<<name<<endl;
		cout<<"Balance="<<bal;
		cout<<endl;
	}
};
int main()
{
	bank_acc b1;
	char c;
	//clrscr(); //changed
	b1.init();
	b1.display();
	while(1)
	{
	cout<<"Do you want to withdraw or deposit?"<<endl;
	cout<<"To deposit enter <d> and to withdraw enter <w>"<<endl;
	cin>>c;
	if(c=='d')
	b1.deposit();
	else if(c=='w')
	b1.withdraw();
	else
	exit(1);
	}

}
