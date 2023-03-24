/*
Write a program that will read a line of text containing more than three words and then replace all the blank spaces with an underscore(_).
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    cout << "Enter a line of text: ";
    getline(cin, text);
    string :: iterator it;
    for (it = text.begin(); it != text.end(); ++it){
        if (*it == ' '){
            *it = '_';
        }
    }
    cout << "Modified text: " << text << endl;
    return 0;
}