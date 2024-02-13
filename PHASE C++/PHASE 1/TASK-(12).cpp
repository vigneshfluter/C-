#include<iostream>
using namespace std;

int Interest (float p, float r , float n)
{
    return ( p * r* n ) / 100 ;
}

int main()
{
    float p, r, n ;

    cout << "Enter P : " ;
    cin >> p ; 
    cout << "Enter R : " ;
    cin >> r ; 
    cout << "Enter N : " ;
    cin >> n ; 

    cout << "Your Interest Is : " << (float)Interest(p, r, n) << endl;
    
    return 0;
}