#include <iostream>
using namespace std;

template <typename T, int N> 
pair<T, T> findMinMax(T a[], int size){
    T min = a[0];
    T max = a[0];
    for (int i = 1; i < size; i++) {
        if (values[i] < min) {
            min = values[i];
        }
        if (values[i] > max) {
            max = values[i];
        }
    }

    return 
}


template <typename T, int N>
std::pair<T, T> minmax(const T (&arr)[N]) {
  // Initialize min and max with the first element
  T min = arr[0];
  T max = arr[0];
  // Loop through the rest of the array and update min and max
  for (int i = 1; i < N; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  // Return a pair of min and max
  return std::make_pair(min, max);
}