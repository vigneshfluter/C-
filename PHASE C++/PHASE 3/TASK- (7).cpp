#include <iostream>
using namespace std;

string toTitleCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || str[i - 1] == ' ')
            str[i] = toupper(str[i]);
        else 
            str[i] = tolower(str[i]);
    }
    return str;
}


string toToggleCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i])) 
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    return str;
}

int main()
{
    string input;
    int choice;

    cout << "Enter a string: ";
    cin >> input;

    cout << "Choose an option:" << endl;
    cout << "1. Convert to lowercase" << endl;
    cout << "2. Convert to uppercase" << endl;
    cout << "3. Convert to title case" << endl;
    cout << "4. Convert to toggle case" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        for (char &c : input)
            c = tolower(c);
        cout << "Lowercase: " << input << endl;
        break;
    case 2:
        for (char &c : input)
            c = toupper(c);
        cout << "Uppercase: " << input << endl;
        break;
    case 3:
        cout << "Title Case: " << toTitleCase(input) << endl;
        break;
    case 4:
        cout << "Toggle Case: " << toToggleCase(input) << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
