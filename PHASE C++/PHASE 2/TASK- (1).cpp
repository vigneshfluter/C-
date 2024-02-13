#include <iostream>
using namespace std;

void Multi_Table(int num, int start,int end)
{
    for(int i=start; i <= end; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}

int main()
{
    Multi_Table (7,50,70);
    return 0;
}