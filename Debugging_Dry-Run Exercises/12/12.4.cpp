#include <iostream>
using namespace std;
// Method 1
template <class T, class U> T max(T a, U b){
    ...
};
unsigned int m;
int main(){
    cout << max(m, 100) << endl;
    return 0;
}