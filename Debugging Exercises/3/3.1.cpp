#include<iostream>
using namespace std;

int main(){
    int num[] = {1, 2, 3, 4, 5, 6};
    num[1] = num[1] ? cout << "Success" : cout << "Error";
    return 0;
}