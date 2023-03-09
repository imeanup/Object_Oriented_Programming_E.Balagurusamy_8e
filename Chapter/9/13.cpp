#include <iostream>
#include <cstring>

using namespace std;

class media{
    protected:
        char title[50];
        float price;
    public:
        media(char *s, float a){
            strcpy(title, s);
            price = a;
        }
};

class book : public media{
    int pages;
    public:
        book(char *s, float a, int p): media(s,a){
            pages = p;
        }
        void display();
};

class tape : public media{
    float time;
    public:
        tape(char *s, float a, float t):media(s, a){
            time = t;
        }
        void display();
};

void book :: display(){
    cout << "\nTitle: " << title << endl;
    cout << "\nPages: " << pages << endl;
    cout << "\nPrice: " << price << endl;
}
// TODO: display
void tape::display(){
    cout << endl;
}