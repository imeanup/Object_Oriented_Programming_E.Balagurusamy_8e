#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1("He live in India\n");
    string s2("He is happy ");
    string s3 = s1.substr(8, 8);
    s2.insert(12, s3);
    cout << s2 << flush << endl;
    return 0;
}

/*
He is happy in India
*/