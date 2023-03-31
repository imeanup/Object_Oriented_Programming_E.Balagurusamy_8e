#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;
public:
    void setcode(void){
        code = ++count;
    }
    void showcode(void){
        cout << "Object number:" << code <<"\n";
    }
    static void showcount(void){
        cout << "count: "<< count << "\n";
    }
};
int test :: count;
int main(){
    test t1, t2;
    
    t1.setcode();
    t2.setcode();
    
    test :: showcount();
    
    test t3;
    t3.setcode();
    
    test::showcount();
    
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}
/* 

|--------------------------------------------------------------|
| g++ Static\ Member\ Function.cpp -o Static\ Member\ Function |
| ./Static\ Member\ Function                                   |
|--------------------------------------------------------------|

count: 2
count: 3
Object number:1
Object number:2
Object number:3
*/