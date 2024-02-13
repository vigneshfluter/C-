#include<iostream>
using namespace std ;

int main()
{

    // Help Martin to solve a special kind of puzzle by
    // designing a C++ system. Total 25 random numbers arranged
    // in a form of Square Matrix. To solve that puzzle, he has
    // to find addition of all diagonally aligned numbers on
    // puzzle cardboard.

    int rc,sum=0;

    cout << "Enter Row & Column Size: " ;
    cin >> rc ;

    int numbers[rc][rc] ;

    for(int i=0;i<rc;i++)
    {
        for(int j=0;j<rc;j++)
        {
            cout << "numbers[" << i << "][" << j << "]: ";
            cin >> numbers[i][j];
        }
    }

    for(int i=0;i<rc;i++)
    {
        sum += numbers[i][i] ;
    }

    cout << "Your Diagonal Element Sum Is: " << sum << endl ;

    return 0;
}