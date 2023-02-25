#include <iostream>

using namespace std;

/* 
Enumerated type and values. Each enumeration value is implicitly assigned an integer value by the compiler, 
with the first value being assigned 0, the second value being assigned 1, and so on. Unless specified.
*/
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
    // return w1 == w2;
    if (w1== mSunday && w2 == mSunday)
        return 1;
    else if (w1 == mSunday && w2 == mSunday)
        return 1;
    else if (w1 == mSunday && w2 == mSunday)
        return 1;
    else if (w1 == mSunday && w2 == mSunday)
        return 1;
    else if (w1 == mSunday && w2 == mSunday)
        return 1;
    else if (w1 == mSunday && w2 == mSunday)
        return 1;
    else
        return 0;
}

int main(){
    WeekDays w1 = mSunday, w2 = mSunday;
    if (w1==w2)
        cout << "Same Day\n";
    else
        cout << "Different Day\n";
        return 0;
}

// segmentation fault