#include<iostream>
using namespace std;

int Num_Digits(int num)
{
    int temp = 0 ;

    while(num>0)
    {
        num /= 10 ;
        temp++;
    }

    return temp ;
}

int main()
{

    cout << "Your Number Of Digits : " << Num_Digits(12345) << endl;

    return 0;
}