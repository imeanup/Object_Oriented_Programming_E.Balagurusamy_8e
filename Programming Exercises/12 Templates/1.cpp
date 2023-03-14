// Write a function template to find the minimum and maximum values by passing non type arguments to the template.
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T, size_t N> 
pair<T, T> findMinMax(T (&arr)[N]) {
    T min = arr[0];
    T max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return make_pair(min, max);
};


int main(){
    int arr[] = {19, 0, 7, -1, 4, 8};
    auto minmax = findMinMax(arr);
    cout << "Minimum: " << minmax.first << endl;
    cout << "Maximum: " << minmax.second << endl;

    cout << "Another approach using Algorithms-" << endl;

    auto min_max = minmax_element(begin(arr), end(arr));
    cout << "Min: " << *min_max.first << endl;
    cout << "Max: " << *min_max.second << endl;
    return 0;
}
/*
Minimum: -1
Maximum: 19
Another method using Algorithms-
Min: -1
Max: 19
*/