#include<iostream>
using namespace std;

double power(double m, int n = 2){
    double result = 1;
    for (int i = 0; i < n; i++){
        result *= m;
    }
    return result;
}

int main(){
    double x;
    int y;
    cout << "Enter a number: " << endl;
    cin >> x;
    cout << "Enter the power (default = 2): ";
    cin >> y;
    cout << "Result: " << power(x, y) << endl;
    return 0;
}