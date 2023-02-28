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
        // float average;
        float average(int runs, int innings, int notOut) {
            return (float)runs / (innings - notOut);
        }

        void table(){
            cout << setw(10) << "Name" << setw(10) << "Runs" << setw(10) << "Innings" << setw(10) << "Not Out" << setw(10) << "Average" << endl;
        }

        void display(){
            cout << setw(10) << name << setw(10) << runs << setw(10) << innings << setw(10) << not_out << setw(10) << average(runs, innings, not_out) << endl;
        }
};
 
 int main() {
    Player sachin = {"Sachin", 8430, 230, 18};
    Player saurav = {"Saurav", 4200, 130, 9};
    Player rahul = {"Rahul", 3350, 105, 11};
    sachin.table();
    sachin.display();
    saurav.display();
    rahul.display();

    return 0;
}

/*
  Name      Runs   Innings   Not Out   Average
Sachin      8430       230        18   39.7642
Saurav      4200       130         9   34.7107
 Rahul      3350       105        11   35.6383
*/