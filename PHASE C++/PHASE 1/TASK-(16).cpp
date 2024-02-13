#include <iostream>
using namespace std;

void Even_Or_Not(int x)
{

    if (x % 2 == 0)
        cout << "Your Number Is Even........" << endl;
    else
        cout << "Your Number Is Odd........" << endl;
}

int main()
{
    int num;

    cout << "Enter Numbr : " ;
    cin >> num;

    Even_Or_Not(num);

    return 0;
}