#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char buffer[80];
    ifstream in("ch11_3.cpp");
    while (in.getline(buffer, 80)){
        cout << buffer << endl;
    }
    while (!in.getline(buffer, 80).eof()){
        cout << buffer << endl;
    }
    return 0;
}