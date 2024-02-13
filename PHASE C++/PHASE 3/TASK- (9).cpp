#include<iostream>
using namespace std;

int main() 
{
    string name;

    cout << "Enter a Name : ";
    cin >> name;

    cout << "Numbers : ";
    for (int i = 0; i < name.length(); ++i) 
    {
        char ch = name[i];
        if (ch >= '0' && ch <= '9') 
        {
            cout << ch << " ";
        }
    }
    cout << endl;

    cout << "Special Symbols : ";
    for (int i = 0; i < name.length(); ++i) 
    {
        char ch = name[i];
        if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z') && !(ch >= '0' && ch <= '9')) 
        {
            cout << ch << " ";
        }
    }
    cout << endl;

    return 0;
}

