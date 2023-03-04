#include <iostream>
#include <cstring>

using namespace std;

class person{
    char name[20];
    float age;
    public:
        person(const char *s, float a){
            strcpy(name, s);
            age = a;
        }
        const person& greater(const person &x) const{
            return x.age >= age ? x:*this;
        }
        void display(void){
            cout << "Name: " << name << endl << "Age: " << age << endl;
        }
};

int main(){
    person P1("John", 37.50), P2("Ahmed", 29.0), P3("Hebber", 40.25);

    person P = P1.greater(P3);
    cout << "Elder person is :" << endl;
    P.display();

    P = P1.greater(P2);
    cout << "Elder person is: " << endl;
    P.display();

    return 0;
}