#include <iostream>
using namespace std;

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix[3][3];

    cout << "Enter values for matrix1:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "matrix1[" << i << "][" << j << "] : ";
            cin >> matrix1[i][j];
        }
    }

    cout << endl << "Enter values for matrix2:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "matrix2[" << i << "][" << j << "] : ";
            cin >> matrix2[i][j];
        }
    }

    cout << endl << "Sum of matrices:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
