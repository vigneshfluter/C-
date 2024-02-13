#include <iostream>
using namespace std;

int main()
{
    // A Teacher gives a list to students in which a list
    // contains many years in numeric format i.e 1994, 1947,
    // 2002, 1996, etc. All students supposed to find all
    // duplicate years which occurs more than once and store
    // them into another list. Design such type of system with
    // help of C++.

    int n, temp;

    cout << "How Many years : ";
    cin >> n;

    int year[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Year: ";
        cin >> year[i];
    }

    for (int i = 0; i < n; i++) // 5 1 2 3 4
    {
        for (int j = i + 1; j < n; j++)
        {
            if (year[i] > year[j])
            {
                year[i] = year[i] + year[j];
                year[j] = year[i] - year[j];
                year[i] = year[i] - year[j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << year[i] << endl;
    }

    return 0;
}