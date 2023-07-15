#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string text;
    int lines = 0, words = 0, chars = 0;

    cout << "Enter text (press Ctrl+D on a new line to stop):" << endl;

    // Read the text from the keyboard until the user presses Ctrl+D
    while (getline(cin, text)) {
        lines++; // increment the line count

        // Count the words and characters in the current line
        int lineWords = 0;
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == ' ') {
                lineWords++;
            }
            chars++;
        }
        lineWords++; // add 1 for the last word in the line
        words += lineWords; // add the number of words in the line to the total word count
    }

    // Display the results in two columns
    cout << left << setw(20) << "LINES" << right << setw(10) << lines << endl;
    cout << left << setw(20) << "WORDS" << right << setw(10) << words << endl;
    cout << left << setw(20) << "CHARACTERS" << right << setw(10) << chars << endl;

    return 0;
}
