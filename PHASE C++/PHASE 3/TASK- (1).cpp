#include <iostream>
#include <string>
using namespace std;

void findCharacterFrequency(string str, int count[])
{
    for (char c : str)
    {
        if (c >= 'a' && c <= 'z')
            count[c - 'a']++;
        else if (c >= 'A' && c <= 'Z')
            count[c - 'A']++;
    }
}

int main()
{
    string inputString;
    int frequency[26] = {0};

    cout << "Enter a string: ";
    getline(cin, inputString);

    findCharacterFrequency(inputString, frequency);

    cout << "Frequency of characters in the given string:\n";
    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (frequency[c - 'a'] > 0)
            cout << c << ": " << frequency[c - 'a'] << endl;
    }

    cout << "\nDhruv wins ₹.1500 if he finds the frequency first!\n";

    cout << "\nNayan wins ₹.1200 for counting the frequency!\n";

    return 0;
}
