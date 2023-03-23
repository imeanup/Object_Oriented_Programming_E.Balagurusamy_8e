// Redo the Exercise 14.17 using a set. (I believe it was Ex. 14.1)

#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    s.insert(0);
    s.insert(9);
    for (int i = 1; i < 9; i++) {
        s.insert(1);
    }
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    return 0;
}

/*
0 1 9 
*/