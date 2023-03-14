#include <iostream>
using namespace std;

template <class T> T linearSearch(T arr[], int n, T key){
    int i;
    while (i < n){
        if (arr[i] == key){
            cout << "Element at index: " << i << endl;
        }
        i++;
    }
    cout << "Element not present" << endl;
}

int main(){
    int arr[] = { 1, 9, 42, 0, -2, -42, 42, 5 };
    int size = sizeof(arr)/sizeof(int);
    int key = 42;

    linearSearch(arr, size, key);
}