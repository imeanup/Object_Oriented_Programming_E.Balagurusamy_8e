#include <iostream>
#include <cmath>
using namespace std;

class PrimeChecker{
    private:
        int number;
    public:
        PrimeChecker(int n){
            number = n;
        }
        // ref: https://cs50.harvard.edu/web/2020/notes/7/
        bool isPrime(){
            if (number <= 1){
                return false;
            }
            for (int i = 2; i <= sqrt(number); i++){
                if (number % i == 0){
                    return false;
                }
            }
            return true;
        }
};

int main(){
    int n;
    cout << "Enter a number to check if it's prime: ";
    cin >> n;
    PrimeChecker p(n);
    if (p.isPrime()){
        cout << n << " is a prime number" << endl;
    }
    else{
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}