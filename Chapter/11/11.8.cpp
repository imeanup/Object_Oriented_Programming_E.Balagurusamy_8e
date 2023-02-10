#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class INVENTORY{
    char name[10];
    int code;
    float cost;
    public:
        void getdata(void){
            cout << "Name: "; cin >> name;
            cout << "Code: "; cin >> code;
            cout << "Cost: "; cin >> cost;
        }
        void putdata(void){
            cout << setw(10) << name << setw(10) << code << setprecision(2) << setw(10) << cost << endl;
        }
};

int main(){
    INVENTORY item;
    fstream inoutfile;
    inoutfile.open("STOCK.DAT", ios::ate | ios::in | ios::out | ios::binary);
    inoutfile.seekg(0, ios::beg);
    cout << "CURRENT CONTENT OF STOCK" << "\n";

    while(inoutfile.read((char *) &item, sizeof item)){
        item.putdata();
    }
    inoutfile.clear();

    cout << "\nADD AN ITEM\n";
    item.getdata();
    char ch;
    cin.get(ch);
    while(inoutfile.write((char*) & item, sizeof item)){
        
    }
}