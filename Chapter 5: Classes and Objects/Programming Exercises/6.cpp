#include <iostream>
#include <vector>
using namespace std;

class Matrix{
    private:
        int row, col;
        vector<vector<int>> m;

    public:
        Matrix(){
            row = 3;
            col = 3;
        }

        Matrix(int r, int c){
            row = r;
            col = c;
            m.resize(row, vector<int>(col));
        }

        void read(){
            cout << "Enter the elements of the matrix:\n";
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    cout << "m[" << i << "][" << j << "] = ";
                    cin >> m[i][j];
                }
            }
        }

        void display(){
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    cout << m[i][j] << " ";
                }
                cout << endl;
            }
        }

        Matrix operator*(Matrix& other){
            Matrix result(row, other.col);
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < other.col; j++) {
                    result.m[i][j] = 0;
                    for (int k = 0; k < col; k++) {
                        result.m[i][j] += m[i][k] * other.m[k][j];
                    }
                }
            }
            return result;
        }
};

int main(){
    int m, n, p, q;
    cout << "Enter the dimension of matrix A(m x n): ";
    cin >> m >> n;
    Matrix A(m,n);
    A.read();

    cout << "Enter the dimensions of matrix B (p x q): ";
    cin >> p >> q;
    Matrix B(p, q);
    B.read();

    if (n != p){
        cout << "Error: The number of columns in matrix A must equal the number of rows in matrix B." << endl;
        exit(1);
    }

    Matrix C = A*B;

    cout << "Matrix A:" << endl;
    A.display();
    cout << "Matrix B:" << endl;
    B.display();
    cout << "Matrix C = A * B:" << endl;
    C.display();

    return 0;
}

/*
Enter the dimension of matrix A(m x n): 3 3
Enter the elements of the matrix:
m[0][0] = 1
m[0][1] = 2
m[0][2] = 3
m[1][0] = 1
m[1][1] = 1
m[1][2] = 1
m[2][0] = 2
m[2][1] = 4
m[2][2] = 5
Enter the dimensions of matrix B (p x q): 3 3
Enter the elements of the matrix:
m[0][0] = 3
m[0][1] = 2
m[0][2] = 1
m[1][0] = 1
m[1][1] = 2
m[1][2] = 3
m[2][0] = 3
m[2][1] = 2
m[2][2] = 1
Matrix A:
1 2 3 
1 1 1 
2 4 5 
Matrix B:
3 2 1 
1 2 3 
3 2 1 
Matrix C = A * B:
14 12 10 
7 6 5 
25 22 19 
*/