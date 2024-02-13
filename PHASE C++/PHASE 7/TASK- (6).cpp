#include<iostream>
using namespace std ;

void Identify(char temp )
{
    if((temp>='A' && temp<='Z') || (temp>='a' && temp<='z') )
        cout << "Your Value Is Alfabet............." << endl; 
    else if (temp >= '1' && temp <= '9')
        cout << "Your Value Is Number............." << endl ;
    else 
        cout << "Your Value Is Special Character................" << endl ;
}

int main()
{
    char value;

    cout << "Enter Any : " ;
    cin >> value ;
    
    Identify(value);
    return 0;
}