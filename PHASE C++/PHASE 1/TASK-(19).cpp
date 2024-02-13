#include<iostream>
using namespace std;

void table(int xx)
{
    for(int i=1 ; i <=10 ; i++)
    {
        cout << xx << " X " << i << " = " << xx * i << endl;
    }
}

int main()
{
    cout << "Enter Table Number : " ;
    int tableNumber ;
    cin >> tableNumber ;

    table(tableNumber) ;

    return 0;
}