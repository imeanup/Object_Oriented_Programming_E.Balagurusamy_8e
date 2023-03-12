#include <iostream>
using namespace std;

class p{
    public:
        virtual void print(){
            cout << " it is base class " << endl;
        }
};

class q:public p{
    public:
        void print(){
            cout << "it is Derived class" << endl;
        }
};

int main(){
    p *b = new q;
    b->print();
    return 0;
}