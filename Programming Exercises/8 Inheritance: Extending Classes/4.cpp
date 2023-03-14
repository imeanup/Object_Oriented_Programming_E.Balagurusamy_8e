#include <iostream>
#include <string>
using namespace std;

// TODO: Staff class
class Staff{
    protected:
        int code;
        string name;
    public:
        void setCode(int c){
            code = c;
        }
        void setName(string s){
            name = s;
        }
        void display(){
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
        }
};

// TODO: Educational information class
class Education: public Staff{
    protected:
        string education;
        string professional;
    public:
        void setEduPro(string edu, string prof){
            education = edu;
            professional = prof;
        }
        void displayEducation(){
            cout << "Educational Qualification(Highest): " << education << endl;
            cout << "Professional Qualification(Highest): " << professional << endl;
        }
};

// TODO: Derived class Teacher
class Teacher : public Education {
    string subject;
    string publication;
    public:
        void setSubject(string s) {
            subject = s;
        }
        void setPublication(string p) {
            publication = p;
        }
        void display() {
            Staff::display();
            displayEducation();
            cout << "Subject: " << subject << endl;
            cout << "Publication: " << publication << endl;
        }
};
// TODO: Dervied class Officer
class Officer : public Education{
    char grade;
    public:
        void setGrade(char g) {
            grade = g;
        }
        void display() {
            Staff :: display();
            displayEducation();
            cout << "Grade: " << grade << endl;
        }
};
// TODO: main

int main(){
    // TODO: Create objects and set member variables
    Teacher t;
    t.setCode(1001);
    t.setName("John Doe");
    t.setSubject("Mathematics");
    t.setPublication("Linear Algebra");
    t.setEduPro("Master's degree", "PhD in Mathematics");

    Officer o;
    o.setCode(2001);
    o.setName("Jane Smith");
    o.setGrade('A');
    o.setEduPro("Bachelor's degree", "MBA");

    // Display information
    cout << "Teacher Information: " << endl;
    t.display();
    cout << endl;

    cout << "Officer Information: " << endl;
    o.display();
    cout << endl;

    return 0;
}