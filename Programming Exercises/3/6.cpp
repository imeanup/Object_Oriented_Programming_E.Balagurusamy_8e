#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Player
{
    public:
        string name;
        int runs;
        int innings;
        int not_out;
        float average;

        
        void display(){
            cout << setw(10) << name << setw(10) << runs << setw(10) << innings << setw(10) << not_out << setw(10) << average << endl;
        }
};
 
 int main() {
    Player sachin = {"Sachin", 8430, 230, 18};
    Player saurav = {"Saurav", 4200, 130, 9};
    Player rahul = {"Rahul", 3350, 105, 11};

    // Calculate batting averages
    sachin.average = (float)sachin.runs / (sachin.innings - sachin.not_out);
    saurav.average = (float)saurav.runs / (saurav.innings - saurav.not_out);
    rahul.average = (float)rahul.runs / (rahul.innings - rahul.not_out);

    // Output table header
    cout << setw(10) << "Name" << setw(10) << "Runs" << setw(10) << "Innings" << setw(10) << "Not Out" << setw(10) << "Average" << endl;

    // Output table rows
    cout << setw(10) << sachin.name << setw(10) << sachin.runs << setw(10) << sachin.innings << setw(10) << sachin.not_out << setw(10) << sachin.average << endl;
    cout << setw(10) << saurav.name << setw(10) << saurav.runs << setw(10) << saurav.innings << setw(10) << saurav.not_out << setw(10) << saurav.average << endl;
    cout << setw(10) << rahul.name << setw(10) << rahul.runs << setw(10) << rahul.innings << setw(10) << rahul.not_out << setw(10) << rahul.average << endl;

    return 0;
}

/*
  Name      Runs   Innings   Not Out   Average
Sachin      8430       230        18   39.7642
Saurav      4200       130         9   34.7107
 Rahul      3350       105        11   35.6383
*/