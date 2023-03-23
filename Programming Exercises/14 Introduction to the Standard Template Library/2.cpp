// Create an array with even number and a list with odd numbers. 
// Merge two sequences of numbers into a vector using the algorithms merge().
// Display the vector.

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(){
    int even[] = {2, 4, 6};
    list <int> odd = {1, 3, 5};
    vector<int> merged(6);

    merge(even, even + 3, odd.begin(), odd.end(), merged.begin());

    for (int i = 0; i < merged.size(); i++){
        cout << merged[i] << ' ';
    }
    cout << endl;
    return 0;
}   

/*
1 2 3 4 5 6
*/