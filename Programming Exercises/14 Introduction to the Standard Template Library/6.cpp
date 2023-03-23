// Write a program to compare two sequences using lexicographical_compare.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> str = {1, 2, 3};
    vector <int> ptr = {1, 2, 4};

    bool result = lexicographical_compare(str.begin(), str.end(), ptr.begin(), ptr.end());

    if (result) {
        cout << "Sequence 1 is lexicographically less than sequence 2" << endl;
    }
    else{
        cout << "Sequence 1 is not lexicographically less than sequence 2" << endl;
    }
    return 0;
}

/*
g++ -std=c++11 6.cpp

./a.out 
Sequence 1 is lexicographically less than sequence 2
*/