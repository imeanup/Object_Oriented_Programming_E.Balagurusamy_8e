// Write a program to print the following output using for loops
// 1
// 22
// 333
// 4444
// 55555
// .......

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}