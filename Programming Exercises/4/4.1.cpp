#include <iostream>
#include <iomanip>

using namespace std;

void matrix(int m, int n)
{
    float **p;
    p = new float*[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new float[n];
    }
    cout << "Enter " << m << " by " << n << " matrix elements one by one" << endl;
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
    cout << "Enter size of matrix: ";
    cin >> r >> c;
    matrix(r, c);
    return 0;
}
