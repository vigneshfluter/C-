#include <iostream>
using namespace std;

int Prog(float base, float number)
{
    float result = 1;

    for (int i = 0; i < number; ++i)
    {
        result *= base;
    }
    return result;
}

int main()
{
    cout << Prog(5, 4) << endl;

    return 0;
}
