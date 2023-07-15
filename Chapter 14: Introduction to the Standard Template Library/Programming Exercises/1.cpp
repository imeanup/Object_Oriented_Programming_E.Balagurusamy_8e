// Write a code segment that does the following:
// a) Defines a vector v with a maximum size of 10.
// b) Set the first element of v to 0.
// c) Sets the last element of v to 9.
// d) Sets the other elements to 1.
// e) Displays the contents of v.


#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> v(10);
    v[0] = 0;
    v[9] = 9;
    for (int i = 1; i < 9; i++){
        v[i] = 1;
    }
    display(v);
    return 0;
}

/*
0 1 1 1 1 1 1 1 1 9 
*/