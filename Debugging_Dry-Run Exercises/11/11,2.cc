#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("Text.txt");
    fout << "Hello," << endl;
    fout << " How" << endl;
    fout << "are" << endl;
    fout << "you?" << endl;
    fout.close();

    // ifstream fin("Text.txt");
    // fout = (ofstream)cout;
    // char str[80];
    // while (fin){
    //     fin >> str;
    //     fout << str << endl;
    // }
    // return 0;

    ifstream fin("Text.txt");
    string str;
    while (getline(fin, str)){
        cout << str << endl;
    }
    fin.close();
    return 0;
}