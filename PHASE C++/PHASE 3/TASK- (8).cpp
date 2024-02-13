#include <iostream>
using namespace std;

int main()
{
    int i;
    string character;

    cout << "Enter a character: ";
    cin >> character;

    int vowelCount = 0;
    int asciiSum = 0;

    for (i = 0; i < character.length(); ++i)
    {
        char ch = character[i];

        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            vowelCount++;
            asciiSum = asciiSum + int(ch);
        }
    }

    double average = (vowelCount > 0) ? double(asciiSum) / vowelCount : 0;

    cout << "Total vowels: " << vowelCount << endl;
    cout << "Vowels: ";
    for (i = 0; i < character.length(); ++i)
    {
        char ch = character[i];
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            cout << ch << " ";
        }
    }
    cout << endl;
    cout << "Average ASCII value of vowels: " << average << endl;

    if (average >= 10 && average <= 1)
    {
        cout << "character is \"SMOOTHER\"" << endl;
    }
    else if (average > 1 && average <= 30)
    {
        cout << "character is \"SOBER\"" << endl;
    }
    else if (average >= 30)
    {
        cout << "character is \"HARDER\"" << endl;
    }
    else
    {
        cout << "character is \"GORGEOUS\"" << endl;
    }

    return 0;
}
