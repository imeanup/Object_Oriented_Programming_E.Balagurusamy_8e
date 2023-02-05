// write a function that creates a vector of user-given size M using new operator.
#include <iostream>
#include <vector>

std::vector<int>* create_vector(int M) {
    std::vector<int>* v = new std::vector<int>(M);
    return v;
}

int main() {
    int M;
    std::cout << "Enter the size of the vector: ";
    std::cin >> M;
    std::vector<int>* v = create_vector(M);
    delete v;
    return 0;
}
