#include <iostream>
using namespace std;

int main()
{
    // Devansh gives a list of random numbers to his
    // colleague Rohan to distinguish all odd and even numbers,
    // and store them in different lists. Help Rohan by building
    // such a solution with help of C++.

    int listSize, tempEven = 0, tempOdd = 0;

    cout << "Enter List Size : ";
    cin >> listSize;

    int list[listSize], even[listSize] , odd[listSize] ;

    for (int i = 0; i < listSize; i++)
    {
        cout << "list[" << i << "] : ";
        cin >> list[i];
    }

    for (int i = 0; i < listSize; i++)
    {
        if (list[i] % 2 == 0)
        {
            even[tempEven] = list[i];
            tempEven++;
        }
        else
        {
            odd[tempOdd] = list[i] ;
            tempOdd++;
        }
    }

    cout << "your All Even Number List Is Below................" << endl ;
    for (int i = 0; i < tempEven; i++)
    {
        cout << even[i] << endl ;
    }

    cout << "your All Odd Number List Is Below................" << endl ;
    for (int i = 0; i < tempOdd; i++)
    {
        cout << odd[i] << endl ;
    }

    return 0;
}