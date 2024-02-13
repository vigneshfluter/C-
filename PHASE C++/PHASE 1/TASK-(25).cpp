#include<iostream>  
using namespace std;

void Sum_All_Digits(int num)
{
    int temp=0;
    int i;

    while (num !=0)
    {
        i = num % 10 ;
        temp += i ;
        num /= 10 ;    
    }

    cout << "Your Sum Of All Digits Is : " << temp << endl;
    
}

int main()
{
    Sum_All_Digits(12345);
    return 0;
}