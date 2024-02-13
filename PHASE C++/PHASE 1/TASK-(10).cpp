#include<iostream>
using namespace std;

void Days_Calculator(int days) {
    int year = days / 365;
    int remainingDays = days % 365;

    int month = remainingDays / 30;
    remainingDays %= 30;

    cout << "Years: " << year << endl;
    cout << "Months: " << month << endl;
    cout << "Days: " << remainingDays << endl;

}


int main() {
    int totalDays;
    cout << "Enter total number of days: ";
    cin >> totalDays;

    Days_Calculator(totalDays);

    return 0;
}
