#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
    int x[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int y[] = {10, 30, 50, 70};
    if (includes(x, x+8, y, y+4))
        cout << "INCLUDES";
    else cout << "EXCLUDES";
    return 0;
}
/*
INCLUDES
*/