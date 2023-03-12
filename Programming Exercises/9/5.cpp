#include <iostream>

using namespace std;

class Sort{
    public:
        virtual void sort(int arr[], int size){}
};

class Descending : public Sort{
    int i, j, tmp;
    public:
        void sort(int arr[], int size) {
            for(i = 0; i < size; i++){
                for (j = i+1; j < size; j++){
                    if (arr[i] < arr[j]){
                        tmp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = tmp;
                    }
                }
            } 
            cout << "Sorted in descending order: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

class Ascending : public Sort{
    int i, j, tmp;
    public:
        void sort(int arr[], int size) {
            for(i = 0; i < size; i++){
                for (j = i+1; j < size; j++){
                    if (arr[i] > arr[j]){
                        tmp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = tmp;
                    }
                }
            } 
            cout << "Sorted in ascending order: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};


void sortArray(int arr[], int size, Sort *obj){
    obj->sort(arr, size);
}

int main(){
    int arr[5] = { 5, 3, 8, 1, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort in descending order using function pointer
    sortArray(arr, size, new Descending());

    // Resort in ascending order using virtual function
    Sort* obj = new Ascending();
    obj->sort(arr, size);

    return 0;
}

/*
Sorted in descending order: 8 5 3 2 1 
Sorted in ascending order: 1 2 3 5 8 
*/