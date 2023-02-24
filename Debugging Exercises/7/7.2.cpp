#include <iostream>

using namespace std;

enum WeekDays{
    mSunday,
    mMonday,
    mTuesday,
    mWednesday,
    mThursday,
    mFriday,
    mSaturday
};

bool operator==(WeekDays w1, WeekDays w2){
    return w1 == w2;
}

int main(){
    WeekDays w1 = mSunday, w2 = mSunday;
    if (w1 == w2)
        cout << "Same Day\n";
    else
        cout << "Different Day\n";
        return 0;
}