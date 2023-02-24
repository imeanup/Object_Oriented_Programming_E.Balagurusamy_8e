#include <iostream>
#include <vector>

using namespace std;

class MAT {
    int m;
    int n;
    vector<vector<double> > data;

public:
    // Default constructor
    MAT(){
        m = 0;
        n = 0;
    }
    // Parameterized constructor
    MAT(int rows, int cols, double init = 0) {
        m = rows;
        n = cols;
        data.resize(rows);
        for(int i=0; i<rows; i++){
            data[i].resize(cols, init);
        }
    }
    // Copy constructor
    MAT(const MAT& mat) : m(mat.m), n(mat.n), data(mat.data) {}

    // Destructor
    ~MAT(){}
    
    // Assignment operator
    MAT& operator=(const MAT& mat) {
        if (this != &mat) {
            m = mat.m;
            n = mat.n;
            data = mat.data;
        }
        return *this;
    }

    // Getter functions
    int getRows() const {
        return m;
    }

    int getCols() const {
        return n;
    }

    // Matrix operations
    MAT transpose() const {
        MAT transposed(n, m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                transposed.data[i][j] = data[j][i];
            }
        }
        return transposed;
    }

    MAT operator+(const MAT& mat) const {
        MAT result(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result.data[i][j] = data[i][j] + mat.data[i][j];
            }
        }
        return result;
    }

    MAT operator-(const MAT& mat) const {
        MAT result(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result.data[i][j] = data[i][j] - mat.data[i][j];
            }
        }
        return result;
    }

    MAT operator*(const MAT& mat) const {
        MAT result(m, mat.n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < mat.n; j++) {
                double sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += data[i][k] * mat.data[k][j];
                }
                result.data[i][j] = sum;
            }
        }
        return result;
    }
    // Output stream operator
    friend ostream& operator<<(ostream& os, const MAT& mat) {
        for (int i = 0; i < mat.m; i++) {
            for (int j = 0; j < mat.n; j++) {
                os << mat.data[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }
};

int main(){
    MAT A(2, 2, 1);
    cout << "A: \n" << A << endl;

    MAT B(2, 2, 2);
    cout << "B: \n "<< endl;

    MAT C = A + B;
    cout << "+ \n" << C << endl;

    MAT D = A - B;
    cout << "- \n" << D << endl;

    MAT E = A * B;
    cout << "* \n" << E << endl;
}