#include <iostream>
using namespace std;

int main()
{
    // Design a C++ system which automatically identifies if
    // a given word contains any letter or symbol between both
    // SHIFT keys from our regular PC Keyboard.

    char word;

    cout << "Enter Any Word : ";
    cin >> word;

    if (word >= 'A' && word <= 'Z' || word >= 'a' && word <= 'z')
    {
        cout << "Your Character Is Alfabet........" << endl;
    }
    else if (word >= '0' && word <= '9' )
    {
        cout << "Your Word Is Number.........." << endl ; 
    }
    else
        cout << "Your Word Is Special Symbol........" << endl ;

    return 0;
}