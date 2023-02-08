#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;
// int const m = 3;
void matrix(int m, int n = 3)
{
    /*
    float **p;
    p = new float*[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new float[n];
    }
    */
    vector<vector<int> > p(m, vector<int>(n));

    cout << "Enter " << n << " matrix elements one by one" << endl;
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
    int r, c;
    cout << "Enter row size of matrix: ";
    cin >> r;
    matrix(r, c);
    return 0;
}
