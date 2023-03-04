#include <iostream>
#include <cstring>
using namespace std;

class city{
    protected:
        char *name;
        int len;
    public:
        city(){
            len = 0;
            name = new char[len+1];
        }
        void getname(void){
            char *s;
            s = new char[30];
            cout << "Enter city name: ";
            cin >> s;
            len = strlen(s);
            name = new char[len+1];
            strcpy(name, s);
        }
        void printname(void){
            cout << name << endl;
        }
};

int main(){
    city *cptr[10];
    int n = 1;
    int option;

    do{
        cptr[n] = new city;
        cptr[n]->getname();
        n++;
        cout << "Do you want to enter one more name?" << endl;
        cout << "Enter 1 for Yes 0 for No" << endl;
        cin >> option;
    }
    while (option);
    cout << endl;
    for (int i = 1; i <= n; i++){
        cptr[i] -> printname();
    }
    return 0;
}