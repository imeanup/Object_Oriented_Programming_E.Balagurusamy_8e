// Write a code segment that does the following:
// a) Defines a vector v with a maximum size of 10.
// b) Set the first element of v to 0.
// c)Sets the last element of v to 9.
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
    vector <int> v;
}