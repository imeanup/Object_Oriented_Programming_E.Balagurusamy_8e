#include<iostream>
#include<cmath>
using namespace std;

void fun(int count){
    if (count == 0){
        cout << count << endl;
    }
    else{
        cout << count << endl;
        fun(--count);
        return;
    }
}

int main(){
    int count;
    cout << "Enter the value of count: " << endl;
    cin >> count;
    fun(abs(count)); //Changed to abs value of all negative number
    return 0;
}

/*
-261482
segmentation fault for negative number
*/