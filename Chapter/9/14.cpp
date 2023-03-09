#include <iostream>
using namespace std;

class Exforsys{
    public:
        virtual void example() = 0;
};

class Exf1:public Exforsys{
    public:
        void example(){
            cout << "C text book written by Balagurusamy" << endl;
        }
};

class Exf2:public Exforsys{
    public:
        void example(){
            cout << "C++ text Book written by Balagurusamy" << endl;
        }
};

int main(){
    Exforsys* arra[2];
    Exf1 e1;
    Exf2 e2;
    arra[0] = &e1;
    arra[1] = &e2;
    arra[0]->example();
    arra[1]->example();
    return 0;
}

/*
Src: https://www.exforsys.com/tutorials/c-plus-plus/c-pure-virtual-function-and-base-class.html
The class Balagurusamy is the Base class. Inside main function, the class pointer *arra was decalred with a class name
 "Exforsys" which was not the name of the base class.
Page 271, Program-9.14

PS: It is sad to see that even after copying, the copier copied incorrectly.
*/