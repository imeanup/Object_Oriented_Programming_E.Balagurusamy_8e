// Write a function template to perform linear search in an array using c++.

#include <iostream>
using namespace std;

template <class T> T linearSearch(T arr[], int n, T key){
    int i = 0;
    while (i < n){
        if (arr[i] == key){
            cout << "Element at index: " << i << endl;
            return i;
        }
        i++;
    }
    cout << "Element not present" << endl;
    return -1;
}

int main(){
    int arr[] = { 1, 9, 4, 0, -2, -42, 42, 5 };
    int size = sizeof(arr)/sizeof(int);
    int key = -42;

    linearSearch(arr, size, key);
    return 0;
}