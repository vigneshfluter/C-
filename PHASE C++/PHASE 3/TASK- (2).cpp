#include <iostream>
using namespace std;

// Function to reverse a string
string Reverse_String(string str)
{
    string rev = str;
    for (int i = 0; i < str.size() / 2 ; i++)
    {
        char temp = rev[i];
        rev[i] = rev[str.size() - i - 1];
        rev[str.size() - i - 1] = temp;
    }
    return rev;
}

int main()
{
    int sum = 0; // Initialize sum variable to store ASCII sum
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (str.length() > 3 && str.length() < 9) {
        // If length is between 4 and 8 (exclusive), reverse the string
        cout << "Reversed String: " << Reverse_String(str) << endl;
    } else {
        // Otherwise, calculate the sum of ASCII values of each character
        for (int i = 0; i < str.size(); i++)
        {
            sum += (int)str[i];
        }
        cout << "Sum Of All Characters: " << sum << endl;
    }

    return 0;
}
