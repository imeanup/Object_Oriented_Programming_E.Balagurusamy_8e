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
    inoutfile.write((char*) & item, sizeof item);

    inoutfile.seekg(0);
    cout << "CONTENTS of APPENDED FILE\n";

    while(inoutfile.read((char*) & item, sizeof item)){
        item.putdata();
    }

    int last = inoutfile.tellg();
    int n = last/sizeof(item);

    cout << "Number of objects = " << n << "\n";
    cout << "Total bytes in the file = " << last << "\n";

    cout << "Enter object number to be updated \n";
    int object;
    cin >> object;
    cin.get(ch);

    int location = (object - 1) * sizeof(item);
    if (inoutfile.eof())
    inoutfile.clear();

    inoutfile.seekp(location);

    cout << " Enter new values of the Object\n";
    item.getdata();
    cin.get(ch);

    inoutfile.write((char*) & item, sizeof item) << flush;

    inoutfile.seekg(0);

    cout << "CONTENTS of UPDATED FILE\n";

    while (inoutfile.read((char*)& item, sizeof item)){
        item.putdata();
    }

    inoutfile.close();

    return 0;
}