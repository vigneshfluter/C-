#include <iostream>
using namespace std;

void Find_Answer(int num)
{
    int answer = (2 * (num - 3)) / ((4 * num) - 1);

    cout << answer << endl;
}

int main()
{
    Find_Answer(3);

    return 0;
}