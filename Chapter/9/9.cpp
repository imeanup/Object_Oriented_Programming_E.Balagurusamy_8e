#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class city {
protected:
    char* name;
    int len;
public:
    city() {
        len = 0;
        name = new char[len + 1];
    }
    ~city() {
        delete[] name;
    }
    void getname(void) {
        char s[30];
        cout << "Enter city name: ";
        cin >> s;
        len = strlen(s);
        name = new char[len + 1];
        strcpy(name, s);
    }
    void printname(void) {
        cout << name << endl;
    }
};

int main() {
    /*
    // to avoid segmentation fault
    city *cptr[10]; // going out of bounds of the allocated memory for the array of city objects
    */
    vector<city*> cptr;
    int n = 1;
    int option;

    do {
        city* c = new city;
        c->getname();
        cptr.push_back(c);
        cout << "Do you want to enter one more name?" << endl;
        cout << "Enter 1 for Yes 0 for No" << endl;
        cin >> option;
    } while (option);

    cout << endl;
    for (int i = 0; i < cptr.size(); i++) {
        cptr[i]->printname();
        delete cptr[i]; // free the dynamically allocated memory
    }
    return 0;
}
