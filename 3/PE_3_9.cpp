#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;
   double sum = 0, mean, variance = 0;

   cout << "Enter the number of elements: ";
   cin >> n;

   double numbers[n];

   cout << "Enter the elements: ";
   for (int i = 0; i < n; i++) {
      cin >> numbers[i];
      sum += numbers[i];
   }

   mean = sum / n;

   for (int i = 0; i < n; i++) {
      variance += pow(numbers[i] - mean, 2);
   }

   variance /= n;

   cout << "Variance: " << variance << endl;
   cout << "Standard Deviation: " << sqrt(variance) << endl;

   return 0;
}
