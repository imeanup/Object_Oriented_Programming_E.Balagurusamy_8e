#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    int (*p)(int); 

    cout << "Enter a number: ";
    cin >> n;

    p = &factorial; 

    cout << "Factorial of " << n << " is: " << (*p)(n) << endl; 

    return 0;
}

/*
Enter a number: 4
Factorial of 4 is: 24

Enter a number: 6
Factorial of 6 is: 720

Enter a number: 7
Factorial of 7 is: 5040
*/