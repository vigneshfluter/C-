#include<iostream>
using namespace std;

void ExchangeSeating (string first,string second)
{
    string temp;
    temp = first ;
    first = second ;
    second = temp ;

    cout << "First Bech Sit's : " << first 
         << endl 
         << "Second Bech Sit's : " << second
         << endl;
}

int main()
{
    string first,second;

    cout << "Enter First- Student Name : " ;
    cin >> first ;
    cout << "Enter Second Student Name : " ;
    cin >> second ;
    cout << endl ;

    ExchangeSeating (first,second);


    return 0;
}