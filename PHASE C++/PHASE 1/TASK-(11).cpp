#include <iostream>
using namespace std;

int Square(float num)
{
    return num * num;
}

int main()
{
    float a;

    cout << "Enter Number : " ;
    cin >> a; 

    cout << "Your Square Number Is :  "<< Square(a) << endl;

    return 0;
}