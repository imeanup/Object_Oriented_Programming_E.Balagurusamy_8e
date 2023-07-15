/*
Write a program that reads the following text and counts the number of times the word "It" appears in it.
It is new. It is singular.
It is simple. It must succeed!
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text = "It is new. It is singular. It is simple. It must succeed!";
    string word = "It";
    int count = 0;
    size_t pos = 0;
    while ((pos = text.find(word, pos)) != string::npos) {
        ++count;
        pos += word.length();
    }
    cout << "Number of occurrences of '" << word << "': " << count << '\n';
    return 0;
}

/*
Number of occurrences of 'It': 4
*/