#include <iostream>
using namespace std;
int main(){
    int ar[6] = {22, 5, 23, 43, 54, 65};
    int *p, i;
    p = ar;
    
    i = *p++ - *p--;
    cout << i << endl;
    return 0;
}