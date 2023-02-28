#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    float x;
    cout << "Enter the value of a b c: ";
    cin >> a >> b >> c;

    x = (a/b) - c;

    cout << "The value of x: " << x << endl;
    return 0;
}