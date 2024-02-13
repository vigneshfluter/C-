#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Subjects : ";
    cin >> n;

    int viva[n], examination[n], totalMark[n];

    for (int i = 0; i < n; i++)
    {
        int mark, markExam;

        cout << "Viva " << i + 1 << " Mark: ";
        cin >> mark;
        while (mark < 0 || mark > 30)
        {
            cout << "Invalid Mark. Enter Mark Out Of 30: ";
            cin >> mark;
        }
        viva[i] = mark;

        cout << "Examination " << i + 1 << " Mark: ";
        cin >> markExam;

        while (markExam < 0 || markExam > 70)
        {
            cout << "Invalid Mark. Enter Mark Out Of 70: ";
            cin >> markExam;
        }
        examination[i] = markExam;

        totalMark[i] = viva[i] + examination[i];

        cout << "\nYour Mark " << totalMark[i] * 100 / 70 << " Out Of : 100" << endl;
    }

    return 0;
}