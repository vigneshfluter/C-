#include <iostream>
using namespace std;

int main()
{
    // Columbian army arranged all 9 forbidden refugees in a
    // 3x3 matrix formation. An army cadets have to find that
    // which one of the refugees stats the highest weight and
    // which one weighs the lowest weight. Help army cadets by
    // preparing C++ solution for their undercover mission.

    int matrix[3][3], largest = 0, lowest = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "matrix[" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
            if (matrix[i][j] < lowest)
            {
                lowest = matrix[i][j];
            }
        }
    }

    cout << "The Highest Weight Is: " << largest << endl;
    cout << "The Lowest Weight Is: " << lowest << endl;

    return 0;
}
