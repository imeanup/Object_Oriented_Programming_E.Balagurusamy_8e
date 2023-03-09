#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Faculty{
    int id;
    string name;
    string post;
    string qualification;
    string address;

    public:
        void read(){
            cout << "Enter faculty details:\n";
            cout << "ID: " << endl;
            cin >> id;
            cout << "Name: " << endl;
            getline(cin, name);
            cout << "Post: " << endl;
            getline(cin, post);
            cout << "Qualification: " << endl;
            getline(cin, qualification);
            cout << "Address: " << endl;
            getline(cin, address);
        }

        void display(){
            cout << "Name: " << setw(10) << name << endl;
            cout << "ID: " << setw(10) << id << endl;
            cout << "Post: " << setw(10) << post << endl;
            cout << "Qualification: " << setw(10) << qualification << endl;
            cout << "Address: " << setw(10) << address << endl;
        }
};

int main(){
    Faculty f;
    f.read();
    f.display();
    return 0;
}