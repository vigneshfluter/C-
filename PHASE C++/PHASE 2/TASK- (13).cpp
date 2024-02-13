#include <iostream>
using namespace std;

double calculateTax(double income)
{
    double tax = 0;

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = 12500 + (income - 500000) * 0.1;
    }
    else
    {
        tax = 62500 + (income - 1000000) * 0.15;
    }

    return tax;
}

int main()
{
    double income;

    cout << "Enter your income: ";
    cin >> income;

    double tax = calculateTax(income);

    cout << "Income tax to be paid: " << tax << endl;

    return 0;
}
