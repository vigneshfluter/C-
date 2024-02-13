#include<iostream>
using namespace std;

void SecondsIntoHH_MM_SS(int seconds)
{
    int hour=0;
    int minute=0;

    while (seconds >= 60 ) 
    {
        seconds -= 60;
        minute++;
    }
    
    while (minute >= 60 )
    {
        minute -= 60;
        hour++;
    }

    cout << hour << " : " << minute << " : " << seconds << endl ;
}

int main ()
{
    SecondsIntoHH_MM_SS(12000);

    return 0;
}