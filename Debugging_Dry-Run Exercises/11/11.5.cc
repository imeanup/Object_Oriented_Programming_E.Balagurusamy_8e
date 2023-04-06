#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int agrc, char *agrv[]){
    // 1
    ifstream infile("DATA");
    
    // 2
    char buffer[80];
    ifstream fin;
    fin.getline(buffer, 80);

    // 3
    if (fin.eof() == 0){
        exit(1);
    }

    // 4
    fin.close();

    // 5
    ifstream infile;
    infile.open(argv[1]);
    if(!infile){
        cerr << "Error in the code" << endl;
        return 1;
    }
    infile.close();

    // 6
    string file = "file.txt";
    fstream sfinout;
    sfinout.open(file, ios::in| ios::out | ios::ate);
    if (!sfinout.is_open()) {
        cerr << "Could not open the file " << file << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}   