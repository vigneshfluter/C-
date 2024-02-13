#include <iostream>
#include <string>

using namespace std;

int main() {
    string player1, player2;

    cout << "Player 1, enter your dare work: ";
    cin >> player1 ;

    cout << "Player 2, enter your dare work: ";
    cin >> player2 ;

    string temp = player1;
    player1 = player2;
    player2 = temp;

    cout << endl << "Player 1's dare : " << player1 << endl;
    cout << "Player 2's dare : " << player2 << endl;

    return 0;
}
