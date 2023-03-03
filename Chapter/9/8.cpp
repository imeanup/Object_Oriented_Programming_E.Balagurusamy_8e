#include <iostream>
using namespace std;

namespace size_{
    const int size = 2;
}

class item{
    int code;
    float price;
    public:
        void getdata(int a, float b){
            code = a;
            price = b;
        }

        void show(void){
            cout << "Code: " << code << endl;
            cout << "Price: " << price << endl;
        }
};


int main(){
    item *p = new item[size_ :: size];
    item *d = p;
    int x, i;
    float y;

    for (i = 0; i < size_::size; i++){
        cout << "Input code and price for item: " << i+1 << " ";
        cin >> x >> y;
        p->getdata(x, y);
        p++;
    }

    for (i = 0; i < size_::size; i++){
        cout << "Item: " << i+1 << endl;
        d -> show();
        d++;
    }
    return 0;
}

/*
Input code and price for item: 1 40 500
Input code and price for item: 2 50 600
Item: 1
Code: 40
Price: 500
Item: 2
Code: 50
Price: 600
*/