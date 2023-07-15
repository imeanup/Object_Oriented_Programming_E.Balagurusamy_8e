#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int size = 100;
    char buffer[size];
    ifstream in("ch11_1.cpp");
    ofstream out("ch11_1Temp.cpp");
    // while(in){}; Pg 670
    while (in.getline(buffer, size)){
        in.get();
        cout << buffer << endl;
        out << buffer << endl;
    }
    in.close();
    out.close();
    return 0;
}