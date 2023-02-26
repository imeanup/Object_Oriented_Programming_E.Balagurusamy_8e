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
};

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
};

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
};

//  main function

int main(){
    
}