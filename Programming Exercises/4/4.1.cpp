#include <iostream>
using namespace std;

void readMatrix(int m, int n, int** matrix) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << "Enter the element at row " << i + 1 << " and column " << j + 1 << ": ";
      cin >> matrix[i][j];
    }
  }
}

int main() {
  int m, n;
  cout << "Enter the number of rows in the matrix: ";
  cin >> m;
  cout << "Enter the number of columns in the matrix: ";
  cin >> n;

  // Allocating memory for the matrix
  int** matrix = new int*[m];
  for (int i = 0; i < m; i++) {
    matrix[i] = new int[n];
  }

  // Reading the matrix from the keyboard
  readMatrix(m, n, matrix);

  // Deallocating memory for the matrix
  for (int i = 0; i < m; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}
