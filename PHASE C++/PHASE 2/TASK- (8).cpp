#include <iostream>
using namespace std;

void Decimal_To_Binary(int value)
{
    if(value > 1 )
        Decimal_To_Binary(value/2);
    
    cout << value%2 ;
}

int main()
{
    Decimal_To_Binary(27);
    
    cout <<endl;

    return 0;
}