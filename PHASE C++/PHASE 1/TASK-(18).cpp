#include <iostream>
using namespace std;

int Factotial(int number)
{
    int temp = 1;

    for (int i = number; i >= 1; i--)
    {
        temp *= i;
    }
    return temp;
}

int main()
{
    int num;

    cout << "Enter Number To Factorial: ";
    cin >> num;

    cout << "Your Factorial Number Is: " << Factotial(num) << endl;

    return 0;
}
