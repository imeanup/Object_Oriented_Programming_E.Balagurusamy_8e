#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    char c;
    string s;
    cout << "INPUT TEXT\n";
    cin.get(c);
    cin >> s;
    cout << sizeof(s) << endl;
    while (c != '\n'){
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout << "\nNumber of characters = " << count << endl;
    return 0;
}