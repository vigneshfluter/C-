#include <iostream>
using namespace std;

int main()
{

    // Hitler ordered a 10 soldiers pared to align in a row.
    // He wants to know that which soldier have the highest
    // killing score. Help him by design a C++ Program.

    int n;

    cout << "How Many Shoders? : ";
    cin >> n;

    int solder[n], highest_Killing_Score = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Soldier " << i << " Score Is: " ;
        cin >> solder[i] ;
    }

    for (int i = 0; i < n; i++)
    {
        if (solder[i] > highest_Killing_Score)
        {
            highest_Killing_Score = solder[i] ;
        }
    }

    cout << "Your Soldier Highrst Killing Score Is: " << highest_Killing_Score << endl ;

    return 0;
}