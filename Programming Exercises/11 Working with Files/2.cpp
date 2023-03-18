/*
A file contains a list of telephone numbers in the following form 

John    23456
Ahmed   9876
....    ....

The names contain only one word and the names and telephone numbers are separated by white spaces. 
Write program to read this file and output the list in two columns. 
The names should be left justified and the numbers should be right justified.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name, number;
    ifstream myfile("input_2.txt");
    if (myfile.is_open()) {
        while (myfile >> name >> number) {
            cout << left << setw(10) << name << right << setw(10) << number << endl;
        }
        myfile.close();
    }
    else {
        cout << "Unable to open file";
    }
    return 0;
}

/*
File input_2.txt
John           23456
Ahmed           9876
Mike            7008
Barbara         6029
*/