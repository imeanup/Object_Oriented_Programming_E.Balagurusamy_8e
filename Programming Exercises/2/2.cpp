#include <iostream>
using namespace std;

int compare(int a, int b)
{
    // if (a > b){
    //     return a;
    // }
    // else{
    //     return b;
    // }
    return a > b ? a : b;
}
int main(){
    int a, b, ans;
    cout << "Enter two number ";
    cin >> a >> b;
    cout << "Larger number is " << compare(a,b) << endl;
    return 0;
}