#include <iostream>
using namespace std;

int generateRandomNumber()
{
    srand(time(0));
    return rand() % 900000 + 100000;
}

int main() 
{
    int randomNumber = generateRandomNumber();
    cout << "Random 6-digit number: " << randomNumber << endl;
    return 0;
}
