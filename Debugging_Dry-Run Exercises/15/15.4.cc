#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    char r[2];
    r[1] = '\0';
    cin >> s1;
    for (int i = 0; i < s1.length(); i++){
        char ch = s1.at(i);
        if (ch >= 97 && ch <= 122){
            r[0] = ch - 32;
            s1.replace(i, 1, string(r));
        }
    }
    cout << s1 << endl;
    return 0;
}