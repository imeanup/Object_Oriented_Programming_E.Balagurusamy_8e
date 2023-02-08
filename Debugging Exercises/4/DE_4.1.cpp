#include <iostream>
using namespace std;

int sub(int b, int a = 20){ // Add default from right to left (Default Arguments)
    int result;
    result = a-b;
    return result;
}

int main(){
    int a = 100;
    int b = 200;
    int result;
    result = sub(b);
    cout << "Value 1: " << result << endl;
    result = sub(a);
    cout << "Value 2: " << result << endl;
    return 0;
}