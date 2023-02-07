#include<iostream>
using namespace std;

class age{
    private:
        int child_age;
    public:
        age() : child_age(20) {}
        friend int father_age(age); // Friend Function
};
int father_age(age d){
    d.child_age += 15;
    return d.child_age;
}

int main(){
    age D;
    cout << father_age(D);
    return 0;
}