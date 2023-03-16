#include <iostream>
using namespace std;

int main(){
    float pi = 22.0/7.0;
    int i, n;
    cout << "Enter the precison size: ";
    cin >> n;
    cout << "Value of Pi:" << endl;
    for (i = 1; i <= n; i++){
        cout.precision(i);
        cout << pi << endl;
    }
    return 0;
}

/*
Enter the precison size: 10
Value of Pi:
3
3.1
3.14
3.143
3.1429
3.14286
3.142857
3.1428571
3.14285707
3.142857075
*/