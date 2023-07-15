#include <iostream>
#include <string>

using namespace std;

class Staff{
    int code;
    string name;
    public:
        void setCode(int c){
            code = c;
        }
        void setName(string n){
            name = n;
        }
        int getCode(){
            return code;
        }
        string getName(){
            return name;
        }
        void display(){
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
        }
};

class Teacher : public Staff{
    string subject;
    string publication;

    public:
        void setSubject(string s){
            subject = s;
        }
        void setPublication(string s){
            publication = s;
        }
        string getSubject(){
            return subject;
        }
        string getPublication(){
            return publication;
        }
        void display(){
            Staff :: display();
            cout << "Subject: " << subject << endl;
            cout << "Publication: " << publication << endl;
        }
};

class Typist : public Staff{
    int speed;
    public:
        void setSpeed(int s){
            speed = s;
        }
        int getSpeed(){
            return speed;
        }
        void display(){
            Staff :: display();
            cout << "Speed: " << speed << endl;
        }
};

class Officer : public Staff{
    string grade;
    public:
        void setGrade(string s){
            grade = s;
        }
        string getGrade(){
            return grade;
        }
        void display(){
            Staff :: display();
            cout << "Grade: " << grade << endl;
        }
};

class Regular : public Typist{
    float salary;
    public:
        void setSalary(int s){
            salary = s;
        }
        float getSalary(){
            return salary;
        }
        void display(){
            Typist :: display();
            cout << "Salary: " << salary << endl;
        }
    //  No additional member variables or member functions
};

class Casual : public Typist{
    float dailyWages;
    public:
        void setDailyWages(float w){
            dailyWages = w;
        }
        float getDailyWages(){
            return dailyWages;
        }
};

int main(){
    Teacher T;
    T.setCode(1001);
    T.setName("John Doe");
    T.setSubject("Mathematics");
    T.setPublication("ABC Publications");

    Typist typ;
    typ.setCode(1002);
    typ.setName("Jane Smith");
    typ.setSpeed(60);

    Officer o;
    o.setCode(1003);
    o.setName("Bob Johnson");
    o.setGrade("Senior Officer");

    Regular r;
    r.setCode(1004);
    r.setName("Alice Williams");
    r.setSalary(50000);

    Casual c;
    c.setCode(1005);
    c.setName("David Brown");
    c.setDailyWages(1000);

    // Display individual information
    cout << "Teacher Information" << endl;
    T.display();

    cout << "\nTypist Information" << endl;
    typ.display();

    cout << "\nOfficer Information" << endl;
    o.display();

    cout << "\nRegular Employee Information" << endl;
    r.display();

    cout << "\nCasual Employee Information" << endl;
    c.display();

    return 0;
}