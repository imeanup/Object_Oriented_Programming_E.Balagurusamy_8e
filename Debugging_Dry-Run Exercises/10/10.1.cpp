#include <iostream>
using namespace std;

int main(){
    char buffer1[80];
    char buffer2[80];

    cout << "Enter value for buffer1: ";
    cin.getline(buffer1, 80); // cin >> buffer1, refer Program 10.2
    cout << "Buffer1: " << buffer1 << endl;

    cout << "Enter value for buffer2: ";
    cin.getline(buffer2, 80);
    cout << "Buffer2: " << buffer2 << endl;

    return 0;
}

/*
10.1 To get the output, Buffer1: Jack and Jerry, Buffer2: Tom and Mono, what do you have to do in the following program?

Enter value for buffer1: Jack and Jerry
Buffer1: Jack and Jerry
Enter value for buffer2: Tom and Mono
Buffer2: Tom and Mono
*/