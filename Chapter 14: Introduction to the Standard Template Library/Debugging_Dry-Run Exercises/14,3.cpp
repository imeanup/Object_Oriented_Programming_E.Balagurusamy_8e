#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int U[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int X[] = {10, 30, 50, 70, 90};
    vector <int> VZ(10);
    vector <int> :: iterator itr;
    itr = set_difference(U, U+10, X, X+5, VZ.begin());
    VZ.resize(itr - VZ.begin());
    for (int i = 0; i < VZ.size(); i++){
        cout << VZ[i] << " ";
    }
    return 0;
}
/*
20 40 60 80 100
*/