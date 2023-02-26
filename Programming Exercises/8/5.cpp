#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        string name;
        int code;
    public:
        void getName(string n){
            name = n;
        }
        void getCode(int c){
            code = c;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Code: " << code << endl;
        }
};

class Account : virtual public Person{
    protected:
        float pay;
    public:
        void getPay(float p){
            pay = p;
        }
        void diplayPay(){
            cout << "Pay: " << pay << endl;
        }
};

class Admin : virtual public Person{
    protected:
        float experience;
    public:
        void getExperience(float e){
            experience = e;
        }
        void displayExperience(){
            cout << "Experience: " << experience << endl;
        }
};

class Master : public Account, public Admin{
    protected:
        // No declaration
    public:

};

int main(){
    Master m;
    
}