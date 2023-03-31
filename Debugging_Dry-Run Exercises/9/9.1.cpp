#include <iostream>
using namespace std;

class GST{
    float price;
    float percent;
    public:
        void input(float a, float b){
            price = a;
            percent = b;
        }

        void print(){
            cout << "price: " << price << endl;
            cout << "precent: " << percent << endl;
        }
};

int main(){
    GST *p[3] = {new GST(), new GST(), new GST};
    GST *q = p[0];
    int i;
    float s, t, f;
    for (i = 0; i < 3; i++){
        cout << "Provide the price and percent" << endl;
        cin >> s >> t;
        p[i]->input(s, t);
        cout << "You have entered" << endl;
        q->print();
        f = s*t;
        cout << "Price after GST: " << f << endl;
    }
    return 0;
}