#include <iostream>
#include <string>
using namespace std;

// Staff class
class Staff{
    protected:
        int code; string name;
    public:
        void setCode(int code) {
            this->code = code;
        }
        void setName(string name) {
            this->name = name;
        }
        int getCode() const{
            return code;
        }
        string getName() const{
            return name;
        }
};

// Teacher class containing Staff object 
class Teacher{
    private:
        Staff staff;
        string subject;
        string publication;
    public:
        void setCode(int code) {
            staff.setCode(code);
        }
        void setName(string name){
            staff.setName(name);
        }
        void setSubject(string subject){
            this->subject = subject;
        }
        void setPublication(string publication){
            this->publication = publication;
        }
        int getCode() const{
            return staff.getCode();
        }
        string getName() const{
            return staff.getName();
        }
        string getSubject() const{
            return subject;
        }
        string getPublication() const{
            return publication;
        }
        void display();
};

void Teacher :: display(){
    cout << "Name: " << getName() << endl;
    cout << "Code: " << getCode() << endl;
    cout << "Subject: " << getSubject() << endl;
    cout << "Publication: " << getPublication() << endl;
}

// Officer class containing Staff object
class Officer{
    Staff staff;
    string grade;
    
    public:
        void setCode(int code) {
            staff.setCode(code);
        }
        void setName(string name){
            staff.setName(name);
        }
        void setGrade(string grade){
            this->grade = grade;
        } 
        int getCode() const {
            return staff.getCode();
        }

        string getName() const {
            return staff.getName();
        }

        string getGrade() const {
            return grade;
        }
        void display();
};

void Officer :: display(){
    cout << "Name: " << getName() << endl;
    cout << "Code: " << getCode() << endl;
    cout << "Grade: " << getGrade() << endl;
}

//   Typist class containing Staff object
class Typist{
    Staff staff;
    int speed;

    public:
        void setCode(int code) {
            staff.setCode(code);
        }
        void setName(string name) {
            staff.setName(name);
        }
        void setSpeed(int speed) {
            this->speed = speed;
        }
        int getCode() const {
            return staff.getCode();
        }
        string getName() const {
            return staff.getName();
        }
        int getSpeed() const {
            return speed;
        }
};

// Regular Typist class
class RegularTypist : public Typist{
    int wages;
    public:
        void setWages(int wages){
            this->wages = wages;
        }
        int getWages() const{
            return wages;
        }
        void display(){
            cout << "Wages: " << getWages() << endl;
        }
};

//  Casual Typist class
class CasualTypist : public Typist{
    int wages;
    public:
        void setWages(int wages){
            this->wages = wages;
        }
        int getWages() const{
            return wages;
        }
        void display(){
            cout << "Wages: " << getWages() << endl;
        }
};

//  main function

int main() {
    // Create objects and set member variables
    Teacher t;
    t.setCode(1001);
    t.setName("John Doe");
    t.setSubject("Mathematics");
    t.setPublication("Algebra for Beginners");

    Officer o;
    o.setCode(2001);
    o.setName("Jane Smith");
    o.setGrade("Grade 2");

    RegularTypist rt;
    rt.setCode(3001);
    rt.setName("Bob Johnson");
    rt.setSpeed(60);
    rt.setWages(5000);

    CasualTypist ct;
    ct.setCode(4001);
    ct.setName("Mary Brown");
    ct.setSpeed(50);
    ct.setWages(3000);

    // Display information
    cout << "Teacher Information:\n";
    t.display();

    cout << "\nOfficer Information:\n";
    o.display();

    cout << "\nRegular Typist Information:\n";
    rt.display();

    cout << "\nCasual Typist Information:\n";
    ct.display();

    return 0;
}
