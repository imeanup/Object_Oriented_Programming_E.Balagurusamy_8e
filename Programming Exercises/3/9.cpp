#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    double xi, x = 0.0, sum = 0.0, variance, stddev;

    cout << "Enter the number of elements: ";
    cin >> N;

    double arr[N];

    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        x += arr[i];
    }
    x /= N;

    for (int i = 0; i < N; i++) {
        sum += pow(arr[i] - x, 2);
    }
    variance = sum / N;
    stddev = sqrt(variance);

    cout << "Variance = " << variance << endl;
    cout << "Standard Deviation = " << stddev << endl;

    return 0;
}
