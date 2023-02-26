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
};

class Regular : public Typist{
    public:
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
    
}