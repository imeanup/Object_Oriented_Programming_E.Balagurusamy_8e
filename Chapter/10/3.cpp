#include <iostream>
#include <string>

using namespace std;

int main(){
    char *string1 = "C++ ";
    char *string2 = "Programming";
    int m = strlen(string1);
    int n = strlen(string2);

    for (int i = 1; i < n; i++){
        cout.write(string2, i);
        cout << endl;
    }
    return 0;
}