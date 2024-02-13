#include <iostream>

using namespace std;

int main()
{
    const int capacity = 5;
    int a[capacity];

    cout << "Enter unique numbers for each ball:\n";
    for (int i = 0; i < capacity; ++i)
    {
        cout << "Ball " << (i + 1) << ": ";
        cin >> a[i];
    }

    cout << "a arranged in reverse order:\n";
    for (int i = capacity - 1; i >= 0; --i)
    {
        cout << "Ball " << (i + 1) << ": " << a[i] << endl;
    }

    return 0;
}
