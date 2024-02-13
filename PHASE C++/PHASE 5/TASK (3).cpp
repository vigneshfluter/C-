#include <iostream>
using namespace std;

void coin(int a, int b)
{
    int c;

    c = a;
    a = b;
    b = c;

    cout << "after 5 mint first bowl have " << a << " rupi coin" << endl;
    cout << "after 5 mint second bowl have " << b << " rupi coin" << endl;
    
}

int main()
{
    int a = 1, b = 2;

    cout << "first bowl have " << a << " rupi coin" << endl;
    cout << "second bowl have " << b << " rupi coin" << endl;

    coin(a, b);

    return 0;
}
