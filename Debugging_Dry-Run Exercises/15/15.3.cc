#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    cout << "Enter String: ";
    cin >> s1;
    for (int i = 0; i < s1.length(); i++){
        if (s1.at(i) != s1.at(s1.length() - i - 1)){
            cout << "Not Same" << endl;
            break;
        }
    }
    return 0;
}