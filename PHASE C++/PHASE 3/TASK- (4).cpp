#include<iostream>
using namespace std;

int main()
{
    string firstname, lastname, passID1,passID2;

    cout << "Enter First Name: " ;
    cin >> firstname ;
    cout << "Enter Pass ID: " ;
    cin >> passID1 ;
    cout << "Enter Last Name: " ;
    cin >> lastname ;
    cout << "Enter Pass ID: " ;
    cin >> passID2 ;
    
    (passID1 == passID2 ) ? cout << firstname << " " << lastname << " " << passID1 << endl : cout << "Enter Same Pass To Merge" << endl;


    return 0;
}