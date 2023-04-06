#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // fstream fout;
    // fout << (fstream)cout; // casting `cout` to an `fstream` object and then insert it into `fout`, which is not possible.
    // fout << "Hello";
    // return 0;

    
    fstream fout;
    fout.open("output.txt", ios::out); // open the file "output.txt" for writing
    if (!fout) {
        cerr << "Error: unable to open file" << endl;
        return 1;
    }
    fout << "Hello"; // write "Hello" to the file
    fout.close(); // close the file
    return 0;
}