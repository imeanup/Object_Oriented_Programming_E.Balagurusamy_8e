#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;
// int const m = 3;
void matrix(int n, int m = 3)
{
    vector<vector<int> > p(m, vector<int>(n));

    cout << "Enter " << m << " x " << n << " matrix elements one by one" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    cout << "The given matrix is:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int c;
    cout << "Enter column size of matrix: ";
    cin >> c;
    matrix(c);
    return 0;
}
