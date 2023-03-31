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
#include <iomanip>
using namespace std;

int main() {
    string s("123456789");
    int n = s.size(); // length
    int m = 2*n - 1; // width
    for (int i = 1; i <= 5; i++) {
        int k = i - 1;
        // cout << k;
        for (int j = 1; j <= m; j++) {
            if (j <= n - i || j >= n + i) {
                cout << "*";
            } else {
                cout << s[k];
                if (j < n) {
                    k++;
                } 
                else {
                    k--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

/*
        1        
       232       
      34543      
     4567654     
    567898765 
*/