#include <iostream>
#include <vector>

using namespace std;

class MAT {
    int m, n;
    vector<vector<double> > data;

public:
    MAT(int rows = 0, int cols = 0, double init = 0) : m(rows), n(cols), data(rows, vector<double>(cols, init)) {}

    MAT operator+(MAT other) {
        if (m != other.m || n != other.n) {
            cerr << "Error: Matrices have different dimensions\n";
            return MAT();
        }

        MAT result(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    MAT operator-(MAT other) {
        if (m != other.m || n != other.n) {
            cerr << "Error: Matrices have different dimensions\n";
            return MAT();
        }

        MAT result(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    MAT operator*(MAT other) {
        if (n != other.m) {
            cerr << "Error: Matrices cannot be multiplied\n";
            return MAT();
        }

        MAT result(m, other.n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < other.n; j++) {
                for (int k = 0; k < n; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Transpose function
    MAT transpose() {
        MAT result(n, m);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result.data[j][i] = data[i][j];
            }
        }
        return result;
    }

    void print() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MAT a(2, 2, 2);
    MAT b(2, 2, 1);

    cout << "\na + b:\n";
    MAT c = a + b;
    c.print();

    cout << "\na - b:\n";
    MAT d = a - b;
    d.print();

    MAT e(2, 3, 1);
    MAT f(3, 2, 2);

    cout << "\ne * f:\n";
    MAT g = e * f;
    g.print();

    g.transpose();
    g.print();

    return 0;
}