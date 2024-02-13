#include<iostream>
using namespace std;

int Quotient(float x, float y)
{
    return x / y ;
}

int Remainder(float x, float y)
{
    return (int)x % (int)y ;
}

int main()
{
    float a , b ;

    cout << "Enter First Value : " ;
    cin >> a ;
    cout << "Enter Second Value : " ;
    cin >> b ;

    cout << endl 
         << "Your Quotient Is : " 
         << Quotient(a, b) 
         << endl 
         << "Your remainder Is : " << Remainder(a, b) 
         << endl ;

    return 0;
}