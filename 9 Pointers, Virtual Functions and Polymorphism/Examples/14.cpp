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
*/