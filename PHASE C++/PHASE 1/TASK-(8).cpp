#include<iostream>
using namespace std;

void Measurement(float inch)
{
    float feet = inch / 12 ;
    float inches = (int)inch % 12 ;

    cout << "Feet: " << feet << "\t" << "Inches: " << inches << endl ;
}

int main()
{
    float heightForInches;

    cout << "Enter Height In Inches: " ;
    cin >> heightForInches ;

    Measurement(heightForInches);

    return 0;
}