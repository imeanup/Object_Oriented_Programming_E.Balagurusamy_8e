#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
    int x[] = {10, 50, 30, 40, 20};
    int y[] = {70, 90, 60, 80};
    make_heap(x, x+5);
    make_heap(y, y+4);
    pop_heap(x, x+5);
    pop_heap(y, y+4);
    for (int i = 0; i < 5; i++){
        cout << x[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++){
        cout << y[i] << " ";
    }
    cout << endl;
    int z[9];
    merge(x, x+5, y, y+4, z);
    for (int i = 0; i < 9; i++){
        cout << z[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
40 20 30 10 50 
80 70 60 90 
40 20 30 10 50 80 70 60 90
*/