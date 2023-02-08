#include<iostream>
using namespace std;

double power(double m, int n = 2){
    double result = 1;
    for (int i = 0; i < n; i++){
        result *= m;
    }
    return result;
}

double power(int m, int n = 2){
    int result = 1;
    for (int i = 0; i < n; i++){
        result *= m;
    }
    return result;
}

int main(){
    double m;
    int n;
    cout << "Enter a value for m: ";
    cin >> m;
    cout << "Enter a value for n (or press enter to use the default value of 2): ";
    if (cin >> n)
    {
        cout << m << " raised to the power of " << n << " is " << power(m, n) << endl;
        cout << m << " raised to the power of " << n << " is " << power((int)m, n) << endl;
    }
    else
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << m << " raised to the power of 2 is " << power(m) << endl;
        cout << m << " raised to the power of 2 is " << power((int)m) << endl;
    }
    return 0;
}
