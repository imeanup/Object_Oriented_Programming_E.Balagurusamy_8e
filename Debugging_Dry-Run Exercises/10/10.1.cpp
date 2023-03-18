#include <iostream>
using namespace std;

int main(){
    char buffer1[80];
    char buffer2[80];

    cout << "Enter value for buffer1: ";
    cin >> buffer1;
    cout << "Buffer1: " << buffer1 << endl;

    cout << "Enter value for buffer2: ";
    cin.getline(buffer2, 80);
    cout << "Buffer2: " << buffer2 << endl;

    return 0;
}