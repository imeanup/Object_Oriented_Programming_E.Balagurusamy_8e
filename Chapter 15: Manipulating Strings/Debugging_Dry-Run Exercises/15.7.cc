#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1("We love to walk");
    if (s1.at(4) == s1[4]){
        s1 = s1.substr(8,7);
        cout << s1 << endl;
    }
    else{
        s1.replace(7, 4, "hate");
    }
    return 0;
}
/*
to walk
*/