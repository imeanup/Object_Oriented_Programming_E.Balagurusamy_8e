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
        void display(){
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
            Education::display();
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
            Education :: display ();
            cout << "Grade: " << grade << endl;
        }
};
// TODO: main

int main(){
    
}