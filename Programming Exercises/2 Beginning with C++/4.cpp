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

/*
Enter the value of a b c: 250 85 25
The value of x: -22.0588
Enter the value of a b c: 300 70 70
The value of x: -65.7143
*/