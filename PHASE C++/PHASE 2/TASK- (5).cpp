#include <iostream>
using namespace std;

int main() {
    float math, phy, chem;

    cout << "Enter Math Marks: ";
    cin >> math;
    cout << "Enter Physics Marks: ";
    cin >> phy;
    cout << "Enter Chemistry Marks: ";
    cin >> chem;

    if (math >= 80 && phy >= 75 && chem >= 72)
        cout << "Your Student Grade A" << endl;
    else if ((math >= 60 && math < 80) && (phy >= 55 && phy < 75) && (chem >= 50 && chem < 72))
        cout << "Your Student Grade B" << endl;
    else if ((math >= 40 && math < 60) && (phy >= 35 && phy < 55) && (chem >= 35 && chem < 50))
        cout << "Your Student Grade C" << endl;
    else
        cout << "Your Student Fail Sorry" << endl;

    return 0;
}
