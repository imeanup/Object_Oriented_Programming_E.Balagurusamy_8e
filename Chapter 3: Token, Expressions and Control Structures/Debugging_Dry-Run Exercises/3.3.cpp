#include<iostream>
#include<cstring>
using namespace std;

char* allocateMemory();
int main(){
    char* str;
    str = allocateMemory();
    cout << str;
    delete[] str;
    str = new char[30];
    strcpy(str, "   ");
    cout << str << endl;
    delete[] str;
    return 0;
}

char* allocateMemory(){
    char* str = new char[30];
    strcpy(str, "Memory allocation test, ");
    return str;    
}