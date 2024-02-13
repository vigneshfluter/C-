#include<iostream>
using namespace std;

void Fibonacci(int n)
{
    int f = 0, s = 1, temp;
    
    cout << f << " " << s << " ";

    for(int i = 2; i < n; i++)
    {
        temp = f + s;
        cout << temp << " ";
        f = s;
        s = temp;
    }
}

int main()
{
    Fibonacci(5);

    return 0;
}
