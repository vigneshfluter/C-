#include <iostream>
using namespace std;

int main()
{
    int n, sum, temp = 0;

    cout << "Enter The Number Can You Avradge find : ";
    cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
    {
        cout << "num[" << i << "] = ";
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            sum += num[i];
            ++temp;
        }
    }

    cout << "Your Sum Of All Even Numbers : " << sum << endl;
    cout << "Your Adrage Of All Even Numbers : " << sum / temp << endl;
}