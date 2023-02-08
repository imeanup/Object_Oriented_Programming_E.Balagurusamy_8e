#include<iostream>
using namespace std;

/*
To understand ternary operator, use two elements first:
#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
Now, use the below.

Using ternary operator to check the value of (a) against (b) and (c)
If (a) > (b), then it checks (a) against (c) and returns (a) if it is greater. 
If (b) > (a), then it checks (b) against (c) and returns (b) if it is greater.
*/
#define MAX(a, b, c) ( (a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)) )

int main(){
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << "The largest of three number is " << MAX(a, b, c) << endl;
    return 0;
}