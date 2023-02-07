#include<iostream>
using namespace std;

class item
{
    int number;
    static int count;
public:
    void getdata(int a){
        number = a;
        count++;
    }
    void getcount(void){
        cout << "count:";
        cout << count << "\n";
    }
};
int item :: count;
int main(){
    item a, b, c;
    
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    
    cout << "After reading data" << "\n";

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}
/*
|--------------------------------------------------------|
| g++ Static\ Class\ Member.cpp -o Static\ Class\ Member |
| ./Static\ Class\ Member                                |
|--------------------------------------------------------|

count:0
count:0
count:0
After reading data
count:3
count:3
count:3

*/