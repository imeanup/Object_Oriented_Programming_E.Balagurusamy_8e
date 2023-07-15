#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        int code;
    public:
        Person(string name, int code): name(name), code(code) {}
        string getName() const{
            return name;
        }
        int getCode() const{
            return code;
        }
};

class Account{
    protected:
        float pay;
    public:
        Account(float pay): pay(pay) {}
        float getPay() const{
            return pay;
        }
};

class Admin : virtual public Person{
    protected:
        int experience;
    public:
        Admin(string name, int code, int experience) : Person(name, code), experience(experience){}
        int getExperience() const{
            return experience;
        }
};

class Master : public Account, public Admin{
    private:
        // No declaration
    protected:
        // No declaration
    public:
        Master(string name, int code, int experience, float pay) : Person(name, code), Account(pay), Admin(name, code, experience){}
        void display(){
            cout << "Name: " << getName() << endl;
            cout << "Code: " << getCode() << endl;
            cout << "Experience:  " << getExperience() << endl;
            cout << "Pay: " << getPay() << endl;
        }
        void update(int experience, float pay) {
            Admin::experience = experience;
            Account::pay = pay;
    }
};

int main(){
    Master m("John Doe", 1234, 5, 50000);
    m.display();
    m.update(6, 55000);
    m.display();
    return 0;
}