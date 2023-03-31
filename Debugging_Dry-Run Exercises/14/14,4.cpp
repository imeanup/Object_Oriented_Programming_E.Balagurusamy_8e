#include <iostream>
#include <list>
#include <cstring>

using namespace std;

int main(){
    char str[] = "tattarrattat";
    list <char> l1;
    for (int i = 0; i < strlen(str); i++){
        l1.push_back(str[i]);
    }
    list <char> l2 = l1;
    l2.reverse();
    if (l1 == l2){
        cout << "Palindrome" ;
    }
    else cout << "Not Palindrome";
    cout << endl;
    return 0;
}
/*
Palindrome
*/