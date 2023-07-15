/*
Write a program that reads a list of countries in random order and displays them in alphabetical order. Use comparison operators and functions.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return a < b;
}

int main(){
    vector <string> countries;
    string country;
    cout << "Enter a list of countries (type 'done' when finished): \n";
    while (cin >> country && country != "done"){
        countries.push_back(country);
    }
    sort(countries.begin(), countries.end(), compare);
    cout << "Countries in alphabetical order:\n";
    for (auto c : countries) {
        cout << c << '\n';
    }
    return 0;
}

/*
Enter a list of countries (type 'done' when finished): 
B
Z
X
A
P
done
Countries in alphabetical order:
A
B
P
X
Z
*/