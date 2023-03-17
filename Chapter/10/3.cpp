#include <iostream>
#include <string>

using namespace std;

int main(){
    // ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
    const char *string1 = "C++ ";
    const char *string2 = "Programming";
    int m = strlen(string1);
    int n = strlen(string2);

    for (int i = 1; i <= n; i++){
        cout.write(string2, i);
        cout << endl;
    }

    for (int i = n; i > 0; i--){
        cout.write(string2, i);
        cout << endl;
    }
    cout.write(string1, m).write(string2, n) << endl;
    cout.write(string1, 10) << endl;
    return 0;
}

/*
P
Pr
Pro
Prog
Progr
Progra
Program
Programm
Programmi
Programmin
Programming
Programming
Programmin
Programmi
Programm
Program
Progra
Progr
Prog
Pro
Pr
P
C++ Programming
C++ Progr
*/