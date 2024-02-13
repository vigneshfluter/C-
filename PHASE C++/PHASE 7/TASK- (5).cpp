#include<iostream>  
using namespace std ;

void Shorter_Route(int firstRoute, int secondRoute)
{
    if(firstRoute >= secondRoute)
        cout << "Second Route Is Shorter Than First Route............." << endl ;
    else
        cout << "First Route Is Shorter Than Second Route............." << endl ;
}

int main()
{

    int firstRoute,secondRoute;
    cout << "Enter First Route : " ;
    cin >> firstRoute ;
    cout << "Enter Second Route : " ;
    cin >> secondRoute ;

    Shorter_Route(firstRoute,secondRoute);


    return 0 ;
}