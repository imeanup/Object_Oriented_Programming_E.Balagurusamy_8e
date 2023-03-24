/*
Given a string
string s("123456789");

write a program that displays the following:
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s("abcdefghi");
    int n = s.size();
    int k = 0;
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= n - i; j += 2) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << s[k];
            ++k;
            if (j != i) {
                cout << " ";
            }
        }
        for (int j = n - i + 1; j <= n; j += 2) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}