/*
Write a program that counts the number of occurrences of a particular character, say 'e, in a line of text.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    char ch;
    int count = 0;
    cout << "Enter the line of text: "; 
    getline(cin, text);
    cout << "Enter the character to be counted: ";
    cin >> ch;
    string :: iterator it;
    for (it = text.begin(); it != text.end(); ++it){
        if (*it == ch){
            count++;
        }
    }
    cout << "Number of occurrence of " << ch << " is " << count << endl;
    return 0;
}

/*
Enter the line of text: Hello World! This is Programming in CPP.     
Enter the character to be counted: l
Number of occurrence of l is 3
*/