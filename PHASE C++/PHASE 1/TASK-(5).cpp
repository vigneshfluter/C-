#include<iostream>
using namespace std;

void get_ASCII_value(char value)
{
    printf("%c = %d \n", value,value);
}

int main()
{
    char value;

    cout << "Enter Value: " ;
    cin >> value ;

    get_ASCII_value(value);

    return 0;
}