// Write a program that reads a text file and creates another file that is identical except that every sequence of consecutive blank spaces is replaced by a single space.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string line;
    ifstream myfile("input.txt");
    ofstream outfile("output.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            string newLine = "";
            for (int i = 0; i < line.length(); i++) {
                if (line[i] == ' ' && line[i + 1] == ' ') {
                    continue;
                }
                newLine += line[i];
            }
            outfile << newLine << endl;
        }
        myfile.close();
        outfile.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
    return 0;
}