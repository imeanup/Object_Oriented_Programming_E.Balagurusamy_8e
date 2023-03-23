// Create a student class that includes a students's first name and his roll_number. 
// Create five objects of this class and store them in a list thus creating a phone_lit.
// Write a program using this list to display the student name if the roll_number is given and vice-versa.

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Student{
    public:
        string first_name;
        int roll_number;

        Student(string first_name, int roll_number){
            this->first_name = first_name;
            this->roll_number = roll_number;
        }
};

int main(){
    list <Student> phone_lit = {Student("Alice", 1), Student("Bob", 2), Student("Charlie", 3), Student("Harry", 4), Student("Hermony", 5)};

    int search_roll_number = 3;
    list<Student> :: iterator it;
    for (it = phone_lit.begin(); it != phone_lit.end(); ++it){
        if (it->roll_number == search_roll_number){
            cout << "Name: " << it->first_name << endl;
            break;
        }
    }

    string search_name = "Charlie";
    for (it = phone_lit.begin(); it != phone_lit.end(); ++it){
        // if (strcmp(it->first_name, search_name)){

        // }
        if (it->first_name == search_name){
            cout << "Roll Number: " << it->roll_number << endl;
            break;
        }
    }
    
}