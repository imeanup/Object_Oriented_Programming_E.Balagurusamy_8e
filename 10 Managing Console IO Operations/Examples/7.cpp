#include <iostream>
using namespace std;

int main(){
    cout.fill('<');
    for (int i = 1; i <= 6; i++){
        cout.width(5);
        cout << i;
        cout.width(10);
        cout << 1.0/float(i) << endl;
        if (i == 3){
            cout.fill('>');
        }
    }
    cout << endl << "Padding changed" << endl << endl;
    cout.fill('#');
    cout.width(15);
    cout << 12.345678 << endl;
    return 0;
}

/*
Program 10.7 Padding with fill()

<<<<1<<<<<<<<<1
<<<<2<<<<<<<0.5
<<<<3<<0.333333
>>>>4>>>>>>0.25
>>>>5>>>>>>>0.2
>>>>6>>0.166667

Padding changed

########12.3457
*/