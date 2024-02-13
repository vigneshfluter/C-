#include <iostream>
using namespace std;

void Leap()
{
    int year ;

    cout << "Enter Year : " ;
    cin >> year ;

    if (year % 4 == 0)
        cout << "Your Year Is Leap Year......." << endl;
    else
        cout << "Your Year Is Not Leap Year........." << endl;
}

int main()
{
    Leap();
    return 0;
}