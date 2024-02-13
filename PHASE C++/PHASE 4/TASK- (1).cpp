#include <iostream>
using namespace std;

int main()
{
    // A Train going to Busan have 2 containers which
    // contains Zombies. Container A has 6 zombies, and
    // Container B has 4 zombies. Passengers have to reach in
    // engine container by passing through them. Help them by
    // transferring zombies from both that containers to a new
    // Container C. Build a C++ program for it.

    int a[6] = {0,1,2,3,4,5};
    int b[4] = {6,7,8,9};
    int c[10], temp=6;

    for (int i = 0; i < 6; i++)
    {
        c[i] = a[i] ;
        c[temp] = b[i] ;
        temp++ ;
    }

    for(int i=0;i<10;i++)
    {
        cout << c[i] << endl ;
    }

    return 0;
}