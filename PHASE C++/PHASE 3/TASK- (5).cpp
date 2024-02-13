#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string message;
    cout << "Enter the message: ";
    getline(cin, message);

    int vowels = 0, consonants = 0, digits = 0, specials = 0;

    for (char ch : message)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
           
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else 
                consonants++;
        }
        else if (isdigit(ch))
        { 
            digits++;
        }
        else
        {
            specials++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of special symbols: " << specials << endl;

    return 0;
}
