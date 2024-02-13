#include <iostream>
using namespace std;

int Max(int a, int b, int c)
{

    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int square(int num)
{
    return num * num;
}

void Components(int num)
{

    int divisor = 1, digit;

    while (num / divisor > 9)
    {
        divisor = divisor * 10;
    }

    while (divisor != 0)
    {
        digit = num / divisor;
        cout << digit << " ";
        num = num - (digit * divisor);
        divisor = divisor / 10;
    }
}

int main()
{
    int choice;
    
    while (choice != 5)
    {
        cout << "1 Find maximum of three numbers" << endl;
        cout << "2 Calculate square of a number" << endl;
        cout << "3 Calculate square root of a number" << endl;
        cout << "4 Find components of a number" << endl;
        cout << "5 Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            int a, b, c;

            cout << "Enter three numbers = ";
            cin >> a >> b >> c;

            cout << "Maximum number is = " << Max(a, b, c) << endl;
            break;
        }
        case 2:
        {
            int num;

            cout << "Enter a number = ";
            cin >> num;

            cout << "Square of the number is = " << square(num) << endl;
            break;
        }
        case 3:
        {
            double num;
            cout << "Enter a number = ";
            cin >> num;

            break;
        }
        case 4:
        {
            int num;
            cout << "Enter a number = ";
            cin >> num;

            Components(num);
            break;
        }
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
