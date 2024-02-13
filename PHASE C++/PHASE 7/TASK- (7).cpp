#include <iostream>
using namespace std;

int main()
{
    // password strength detection system
    // password must be greater than or equal to 6 characters
    // password must contain at least one alphabetic letter, one digit, and one special symbol

    string password;

    cout << "Enter password: ";
    cin >> password;

    bool hasAlphabetic = false;
    bool hasDigit = false;
    bool hasSpecialSymbol = false;

    for (char c : password)
    {
        if (isalpha(c))
        {
            hasAlphabetic = true;
        }
        else if (isdigit(c))
        {
            hasDigit = true;
        }
        else if (ispunct(c))
        {
            hasSpecialSymbol = true;
        }
    }

    if (password.length() >= 6 && hasAlphabetic && hasDigit && hasSpecialSymbol)
    {
        cout << "Password strength is sufficient." << endl;
    }
    else
    {
        cout << "Password does not meet the criteria for strength." << endl;
    }

    return 0;
}
