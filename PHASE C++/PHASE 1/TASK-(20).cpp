#include<iostream>
using namespace std;

void Reverse(int num)
{
    int rev = 0;
    int temp;

    while (num > 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }

    cout << "Your Reverse Number Is : " << rev << endl;
    
}

int main()
{
    Reverse(789);

    return 0;
}
