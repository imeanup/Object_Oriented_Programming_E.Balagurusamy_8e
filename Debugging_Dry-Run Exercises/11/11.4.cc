#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
    char str[20] = "Test String";
    fstream file;
    file.open("TEXT", ios::in | ios::out);
    for (int i = 0; i < strlen(str); i++){
        file.put(str[i]);
    }
    file.seekg(0);
    char ch;
    cout << "Reading the file contents";
    while (file){
        file.get(ch);
        cout << ch;
    }

    return 0;
}