#include <iostream>
using namespace std;
int main(){
    int items[4] = {10, 8, 12, 15};
    int cost[4] = {75, 100, 60, 99};

    cout.width(5);
    cout << "ITEMS";

    cout.width(8);
    cout << "COST";

    cout.width(15);
    cout << "TOTAL VALUE" << endl;

    int sum = 0;

    for (int i = 0; i < 4; i++){
        cout.width(5);
        cout << items[i];
        cout.width(8);
        cout << cost[i];
        cout.width(15);
        int value = items[i] * cost[i];
        cout << value << endl;

        sum += value;
    }
    cout << "Grand Total = ";
    cout.width(2);
    cout << sum << endl;

    return 0;
}

/*
ITEMS    COST    TOTAL VALUE
   10      75            750
    8     100            800
   12      60            720
   15      99           1485
Grand Total = 3755
*/