// Write a program that reads a text file and creates another file that is identical except that every sequence of consecutive blank spaces is replaced by a single space.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string line;
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (inFile.is_open() && outFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            string::iterator new_end = unique(line.begin(), line.end(), [](char lhs, char rhs) { return lhs == rhs && lhs == ' '; });
            line.erase(new_end, line.end());
            outFile << line << endl;
        }
        inFile.close();
        outFile.close();

        cout << "Conversion completed successfully." << endl;
    } else {
        cout << "Failed to open input or output file." << endl;
    }

    return 0;
}