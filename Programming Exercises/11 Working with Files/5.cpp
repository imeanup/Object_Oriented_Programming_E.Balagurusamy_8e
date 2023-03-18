/*
Two files named 'Source1' and 'Source2' contain sorted list of integers. 
Write a program that reads the contents of both the files ans stores the merged list in sorted form in a new file named 'Target'.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers;

    ifstream file1("Source1.txt");
    if (file1.is_open()) {
        int number;
        while (file1 >> number) {
            numbers.push_back(number);
        }
        file1.close();
    }

    ifstream file2("Source2.txt");
    if (file2.is_open()) {
        int number;
        while (file2 >> number) {
            numbers.push_back(number);
        }
        file2.close();
    }

    sort(numbers.begin(), numbers.end());

    ofstream file3("Target.txt");
    if (file3.is_open()) {
        for (int i = 0; i < numbers.size(); i++) {
            file3 << numbers[i] << endl;
        }
        file3.close();
    }

    return 0;
}

/*
Files Source1.txt Source2.txt Target.txt
1
2
2
3
3
4
4
5
5
8

*/