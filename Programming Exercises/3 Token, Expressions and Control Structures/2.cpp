// write a function that creates a vector of user-given size M using new operator.
#include <iostream>
#include <vector>

using namespace std;

vector<int>* create_vector(int M) {
    vector<int>* v = new vector<int>(M);
    return v;
}

int main() {
    int M;
    cout << "Enter the size of the vector: ";
    cin >> M;
    vector<int>* v = create_vector(M);
    delete v;
    return 0;
}
