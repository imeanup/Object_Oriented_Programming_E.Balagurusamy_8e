#include <iostream>
using namespace std;

int main(){
    istream &in  = cin;
    ostream &out = cout;
    int x;
    in.operator>>(x);
    out.operator<<(x) << endl;
    return 0;
}

/*
Same program
678
678
*/