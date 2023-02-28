#include <iostream>
using namespace std;

int main(){
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    int i;
    cout << "The array values are:\n";
    for (i = 0; i < 5; i++){
        cout << num[i] << "\n";
    }
}