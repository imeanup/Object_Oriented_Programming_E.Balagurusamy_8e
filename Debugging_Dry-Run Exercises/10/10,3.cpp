#include <iostream>
using namespace std;

namespace myspace{
    istream &in = cin;
    ostream &out = cout;
};
using namespace myspace;

int main(){
    int x;
    in >> x;
    out << x << endl;
    return 0;
}

/*
Same program
45
45
*/