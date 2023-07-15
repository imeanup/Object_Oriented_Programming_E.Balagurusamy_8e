#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream fobj ("Text.txt", ios::ate | ios::in);
    if(fobj.tellg() == fobj.tellp()){
        cout << "Same";
    }
    else{
        cout << "Different";
    }
    return 0;
}