#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char ch;
    ofstream fout;
    fout = (ofstream)cout;
    fout <<"Hello,";
    fout <<" How ";
    fout <<"are ";
    fout <<"you?";
    return 0;
}