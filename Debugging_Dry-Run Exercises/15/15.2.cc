#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("123");
    int s = 0;
    for (int i = 0; i < s1.length(); i++){
        s = s + s1.at(i);
    }
    s = s - 48 * s1.length();
    cout << "The result is : " << s << endl;
    return 0;
}

/*
The result is : 6
*/