#include <iostream>
using namespace std;

int Multiplication(float x, float y, float z)
{
    return x * y * z;
}

int main()
{
    float x, y, z;

    cout << "Enter First Number : ";
    cin >> x;
    cout << "Enter Second Number : ";
    cin >> y;
    cout << "Enter Third Number : ";
    cin >> z;
    cout << endl
         << "Tell Sameer Your Multiplication Answer Is: "
         << Multiplication(x, y, z)
         << endl;
}