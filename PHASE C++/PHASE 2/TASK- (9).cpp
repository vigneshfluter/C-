#include <iostream>
using namespace std;

void GST_Calculator(float money, float rateOfInterest)
{
    cout << "Your Total Bill Including GST Is : Rs." << money + ((money * rateOfInterest) / 100 )<< endl;
    cout << "Your Total GST Text Is: Rs." << (money * rateOfInterest) / 100 << endl;
}

int main()
{
    float amount,rateOfInterest;
    cout << "Enter Your Bill Amount : " ;
    cin >> amount ;
    cout << "Enter Rate Of Interest : " ;
    cin >> rateOfInterest ;

    GST_Calculator(amount,rateOfInterest);

    return 0;
    
}