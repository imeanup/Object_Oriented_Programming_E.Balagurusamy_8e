/*
 Write a program that reads the name
 Martin Luther King
 from the keyboard into three separate string objects and then concatenates them into a new string object using 
 a) + operator and
 b) append() function.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name, middle_name, last_name;
    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter middle name: ";
    cin >> middle_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << endl;
    string full_name = first_name + " " + middle_name + " " + last_name;
    cout << "Full name using + operator: " << full_name << endl;

    string full_name_append = first_name.append(" ").append(middle_name).append(" ").append(last_name);
    cout << "Full name using append(): " << full_name_append << endl;

    return 0;
}

/*
Enter first name: Martin
Enter middle name: Luther  
Enter last name: King

Full name using + operator: Martin Luther King
Full name using append(): Martin Luther King
*/